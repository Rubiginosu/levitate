//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CLEVELPROVIDER_H
#define LEVITATE_CLEVELPROVIDER_H

#include<string>
#include "../../CVector3.h"
#include "../CLevel.h"

using namespace std;

class CLevelProvider {
public:
    virtual string getProvideName() = 0;

    virtual int getProviderOrder() = 0;

    virtual bool usesChunkSection() = 0;

    virtual string getPath() = 0;

    virtual bool isValid(string path) = 0;

    virtual void generate(string path, string name, int seed, string generator, void *options) = 0;

    virtual string getGenerator() = 0;

    virtual void *getGeneratorOptions() = 0;

    virtual void saveChunks() = 0;

    virtual void unloadChunks() = 0;

    virtual bool loadChunk(int X, int Z) = 0;

    virtual bool loadChunk(int X, int Z, bool create) = 0;

    bool unloadChunk(int X, int Z);

    virtual bool isChunkGenerated(int X,int Z) = 0;

    virtual bool isChunkPopulated(int X,int Z) = 0;

    virtual bool isChunkLoaded(int X,int Z) = 0;

    virtual string getName() = 0;

    virtual long getTime() = 0;

    virtual void setTime(long value) = 0;

    virtual long getSeed() = 0;

    virtual void setSeed(long value) = 0;

    // TODO Compare
    virtual void getSpawn() = 0;

    virtual void setSpawn(CVector3* pos) = 0;

    virtual CLevel* getLevel() = 0;

    virtual void close() = 0;
};


#endif //LEVITATE_CLEVELPROVIDER_H
