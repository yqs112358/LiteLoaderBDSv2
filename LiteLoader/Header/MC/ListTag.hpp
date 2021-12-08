// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"

#undef BEFORE_EXTRA

class ListTag : public Tag {

#define AFTER_EXTRA
// Add Member There
std::vector<Tag*> val;

public:
inline static ListTag* create() {
    return (ListTag*)Tag::createTag(Tag::Type::List);
}
inline std::vector<Tag*>& value() {
    return dAccess<std::vector<Tag*>, 8>(this);
}
inline Tag* operator[](int index) {
    if (index < size())
        return get(index);
    return nullptr;
}

// get value
LIAPI unsigned char getByte(int) const;
LIAPI short getShort(int) const;
LIAPI int64_t getInt64(int) const;
LIAPI TagMemoryChunk getByteArray(int) const;


LIAPI void add(Tag* t);
LIAPI void addEnd();
LIAPI void addByte(unsigned char v);
LIAPI void addShort(short v);
LIAPI void addInt(int v);
LIAPI void addInt64(__int64 v);
LIAPI void addFloat(float v);
LIAPI void addDouble(double v);
LIAPI void addString(const std::string& v);
LIAPI void addByteArray(TagMemoryChunk);
LIAPI void addByteArray(void* data, size_t size);
LIAPI void addIntArray(TagMemoryChunk);
LIAPI void addIntArray(void* data, size_t size);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LISTTAG
public:
    class ListTag& operator=(class ListTag const&) = delete;
    ListTag(class ListTag const&) = delete;
#endif

public:
    /*0*/ virtual ~ListTag();
    /*1*/ virtual void deleteChildren();
    /*2*/ virtual void write(class IDataOutput&) const;
    /*3*/ virtual void load(class IDataInput&);
    /*4*/ virtual std::string toString() const;
    /*5*/ virtual int /*enum enum Tag::Type*/ getId() const;
    /*6*/ virtual bool equals(class Tag const&) const;
    /*7*/ virtual void print(std::string const&, class PrintStream&) const;
    /*8*/ virtual std::unique_ptr<class Tag> copy() const;
    /*9*/ virtual unsigned __int64 hash() const;
    /*
    inline  ~ListTag(){
         (ListTag::*rv)();
        *((void**)&rv) = dlsym("??1ListTag@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ListTag();
    MCAPI void add(std::unique_ptr<class Tag>);
    MCAPI std::unique_ptr<class ListTag> copyList() const;
    MCAPI class Tag* get(int) const;
    MCAPI class CompoundTag const* getCompound(unsigned __int64) const;
    MCAPI double getDouble(int) const;
    MCAPI float getFloat(int) const;
    MCAPI int getInt(int) const;
    MCAPI std::string const& getString(int) const;
    MCAPI int size() const;

protected:

private:

};