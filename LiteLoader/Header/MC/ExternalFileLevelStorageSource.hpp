// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ExternalFileLevelStorageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALFILELEVELSTORAGESOURCE
public:
    class ExternalFileLevelStorageSource& operator=(class ExternalFileLevelStorageSource const &) = delete;
    ExternalFileLevelStorageSource(class ExternalFileLevelStorageSource const &) = delete;
    ExternalFileLevelStorageSource() = delete;
#endif

public:
    /*0*/ virtual ~ExternalFileLevelStorageSource();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual class LevelData getLevelData(std::string const &) const;
    /*3*/ virtual class Core::Result getLevelData(std::string const &, class LevelData &) const;
    /*4*/ virtual void saveLevelData(std::string const &, class LevelData const &);
    /*5*/ virtual void getLevelList(std::vector<class Core::PathBuffer<std::string>> &);
    /*6*/ virtual std::unique_ptr<class LevelStorage> createLevelStorage(class Scheduler &, std::string const &, class ContentIdentity const &, class IContentKeyProvider const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>, std::unique_ptr<class LevelStorageEventing>);
    /*7*/ virtual std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(std::string const &, class ContentIdentity const &, class IContentKeyProvider const &);
    /*8*/ virtual bool isNewLevelIdAcceptable(std::string const &);
    /*9*/ virtual void deleteLevel(std::string const &);
    /*10*/ virtual bool renameLevel(std::string const &, std::string const &);
    /*11*/ virtual void renameLevel(class LevelData &, class Core::Path const &, std::string const &);
    /*12*/ virtual bool createBackupCopyOfWorld(std::string const &, std::string const &, std::string const &);
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual bool isLevelMarkedForSync(class Core::Path const &) const;
    /*17*/ virtual bool isLevelPartiallyCopied(class Core::Path const &) const;
    /*18*/ virtual class Core::PathBuffer<std::string> getLevelDatFoundPath(class Core::Path const &) const;
    /*19*/ virtual class Core::PathBuffer<std::string> const getBasePath() const;
    /*20*/ virtual class Core::PathBuffer<std::string> const getPathToLevel(std::string const &) const;
    /*21*/ virtual class Core::PathBuffer<std::string> const getPathToLevelInfo(std::string const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXTERNALFILELEVELSTORAGESOURCE
    MCVAPI bool convertLevel(std::string const &, class ProgressListener *);
    MCVAPI bool isBetaRetailLevel(std::string const &) const;
    MCVAPI bool isConvertible(std::string const &);
    MCVAPI bool requiresConversion(std::string const &);
#endif
    MCAPI ExternalFileLevelStorageSource(class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class SaveTransactionManager>> const &);

protected:

private:

};