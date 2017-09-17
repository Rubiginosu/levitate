//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_IMETADATA_H
#define LEVITATE_IMETADATA_H

#include <string>
#include "CMetadataValue.h"

using namespace std;

class IMetadata {
    virtual void set(string key, CMetadataValue& v) = 0;

    virtual CMetadataValue *get(string key) = 0;

    virtual bool hasMetadata(string k) = 0;

    virtual void remove(string k, IPlugin *owningPlugin) = 0;
};


#endif //LEVITATE_IMETADATA_H
