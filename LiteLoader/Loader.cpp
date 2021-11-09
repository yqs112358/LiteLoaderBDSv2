#include <Windows.h>
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <thread>
#include <filesystem>

#include <LoggerAPI.h>
#include <Utils/WinHelper.h>
#include <Utils/StringHelper.h>
#include <HookAPI.h>
#include <ServerAPI.h>
#include <PluginManager.h>
#include <LLAPI.h>
#include <CrashLogger.h>
#include <Config.h>
using namespace std;

vector<std::wstring> GetPreloadList() {
    //若在preload.conf中，则不加载
    vector<std::wstring> preload_list{};

    if (std::filesystem::exists(std::filesystem::path(TEXT(".\\plugins\\preload.conf")))) {
        std::wifstream dllList(TEXT(".\\plugins\\preload.conf"));
        if (dllList) {
            std::wstring dllName;
            while (getline(dllList, dllName)) {
                if (dllName.back() == TEXT('\n'))
                    dllName.pop_back();
                if (dllName.back() == TEXT('\r'))
                    dllName.pop_back();

                if (dllName.empty() || dllName.front() == TEXT('#'))
                    continue;
                preload_list.push_back(dllName);
            }
            dllList.close();
        }
    }
    return preload_list;
}

void LoadMain()
{
    Logger::Info("Loading plugins...");
    bool enableCrashLogger = EnableCrashLogger;
    string noCrashLoggerReason = "";

    // Get file list
    filesystem::create_directory("plugins");
    filesystem::directory_iterator ent("plugins");
    vector<string> paths;

    for (auto& i : ent) {
        if (i.is_regular_file() && i.path().extension().u8string() == ".dll")
        {
            auto path = i.path().u8string();

            //Check crashlogger
            if(enableCrashLogger)
                for (auto name : NoCrashLogger)
                {
                    if (path.find(name) != string::npos)
                    {
                        enableCrashLogger = false;
                        noCrashLoggerReason = name;
                        break;
                    }
                }
            paths.emplace_back(path);
        }
    }

    //Start CrashLogger
    if (enableCrashLogger)
    {
        if(StartCrashLogger())
            Logger::Info("[CrashLogger] CrashLogger Deamon Process attached.");
        else
        {
            Logger::Warn("[CrashLogger] Builtin CrashLogger failed to start!");
            Logger::Warn("[CrashLogger] There will be no crash log when unhandled exception occurs.");
        }
    }
    else
    {
        Logger::Warn("[CrashLogger] Builtin CrashLogger is not enabled because plugin <{}> conflicts with it", noCrashLoggerReason);
        Logger::Warn("[CrashLogger] There will be no crash log when unhandled exception occurs,");
        Logger::Warn("[CrashLogger] which makes it almost impossible to find out the reason for crash and the source of crash.");
        Logger::Warn("[CrashLogger] ");
        Logger::Warn("[CrashLogger] We strongly recommend you to uninstall plugin <{}> to ensure server security", noCrashLoggerReason);
    }

    // Load plugins
    int pluginCount  = 0;
    vector<std::wstring> preloadList = GetPreloadList();
    for (auto& i : paths) {
        bool loaded = false;
        for (auto& p : preloadList)
            if (p.find(str2wstr(i)) != std::wstring::npos) {
                loaded = true;
                break;
            }
        if (loaded)
            continue;

        auto lib = LoadLibrary(str2wstr(i).c_str());
        if (lib)
        {
            pluginCount++;
            auto pluginFileName = filesystem::path(i).filename().u8string();
            Logger::Info("Plugin <{}> loaded", pluginFileName);

            if (GetPlugin(lib) == nullptr) {
                RegisterPlugin(lib, pluginFileName, pluginFileName, "1.0.0");
            }
        } else {
            Logger::Error("Error when loading plugin <{}>", i);
            Logger::Error() << GetLastErrorMessage() << Logger::endl;
        }
    }

    //Call onPostInit
    auto plugins = GetAllPlugins();
    for (auto& [name, plugin] : plugins) {
        auto fn = GetProcAddress(plugin.handler, "onPostInit");
        if (fn)
        {
            try {
                ((void (*)())fn)();
            } catch (...) {
                Logger::Error("Plugin <{}> throws an exception in onPostInit", name);
                Logger::Error("Fail to init this plugin!");
            }
        }
    }
    Logger::Info()<<std::to_string(pluginCount) + " plugin(s) loaded"<<Logger::endl;
}