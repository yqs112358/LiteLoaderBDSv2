#pragma once
#include <Nlohmann/json.hpp>
#include <Nlohmann/fifo_map.hpp>
#include <string>
#include <filesystem>
#include <Utils/FileHelper.h>
using namespace nlohmann;
using namespace std;

template<class Key, class T, class dummy_compare, class Allocator>
using workaround_fifo_map = fifo_map<Key, T, fifo_map_compare<Key>, Allocator>;
using fifo_json = basic_json<workaround_fifo_map>;

inline fifo_json CreateJson(const std::string& path, const std::string& defContent)
{
    fifo_json jsonConf;
    if (!filesystem::exists(path))
    {
        //创建新的
        CreateDirs(path);

        if (defContent != "")
        {
            try
            {
                jsonConf = fifo_json::parse(defContent);
            }
            catch (exception& e)
            {
                logger.error("Fail to parse default json content!");
                logger.error(e.what());
                jsonConf = fifo_json::object();
            }
        }
        else
        {
            jsonConf = fifo_json::object();
        }

        ofstream jsonFile(path);
        if (jsonFile.is_open() && defContent != "")
            jsonFile << jsonConf.dump(4);
        jsonFile.close();
    }
    else
    {
        //已存在
        auto jsonTexts = ReadAllFile(path);
        if (!jsonTexts)
        {
            jsonConf = fifo_json::object();
        }
        else
        {
            try
            {
                jsonConf = fifo_json::parse(*jsonTexts);
            }
            catch (exception& e)
            {
                logger.error("Fail to parse json content in file!");
                logger.error(e.what());
                jsonConf = fifo_json::object();
            }
        }
        
    }
    return jsonConf;
}