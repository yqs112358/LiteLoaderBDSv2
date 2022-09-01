/**
 * @file  ResourceSignature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceSignature.
 *
 */
class ResourceSignature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCESIGNATURE
public:
    class ResourceSignature& operator=(class ResourceSignature const &) = delete;
    ResourceSignature(class ResourceSignature const &) = delete;
    ResourceSignature() = delete;
#endif

public:
    /**
     * @symbol ?areKnownFilesValid@ResourceSignature@@QEAA_NAEBVPackAccessStrategy@@@Z
     * @hash   660752649
     */
    MCAPI bool areKnownFilesValid(class PackAccessStrategy const &);
    /**
     * @symbol ??1ResourceSignature@@QEAA@XZ
     * @hash   1911833782
     */
    MCAPI ~ResourceSignature();
MCAPI static class Core::PathBuffer<std::string> const SIGNATURE_FILENAME;

//private:
    /**
     * @symbol ?_areKnownFilesValid@ResourceSignature@@AEAA_NAEBVPackAccessStrategy@@_N@Z
     * @hash   851067914
     */
    MCAPI bool _areKnownFilesValid(class PackAccessStrategy const &, bool);
    /**
     * @symbol ?_checkSignedFiles@ResourceSignature@@AEBA_NAEBVPackAccessStrategy@@@Z
     * @hash   -1033191606
     */
    MCAPI bool _checkSignedFiles(class PackAccessStrategy const &) const;
    /**
     * @symbol ?_loadSignaturesFile@ResourceSignature@@AEAAXAEBVPath@Core@@AEBVPackAccessStrategy@@@Z
     * @hash   213006050
     */
    MCAPI void _loadSignaturesFile(class Core::Path const &, class PackAccessStrategy const &);

private:

};