//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CLEVELPROVIDER_H
#define LEVITATE_CLEVELPROVIDER_H

#include<string>

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

    // TODO Finish
};


#endif //LEVITATE_CLEVELPROVIDER_H
