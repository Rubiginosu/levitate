//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CMETADATAVALUE_H
#define LEVITATE_CMETADATAVALUE_H


#include "plugin/IPlugin.h"

class CMetadataValue {
public:
    explicit CMetadataValue(IPlugin *owningPlugin);

    virtual void* value() = 0;

    virtual void invalidate() = 0;

    IPlugin *getOwningPlugin();

protected:
    IPlugin *owningPlugin;


};


#endif //LEVITATE_CMETADATAVALUE_H
