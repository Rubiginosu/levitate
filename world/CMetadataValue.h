//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CMETADATAVALUE_H
#define LEVITATE_CMETADATAVALUE_H


#include "plugin/IPlugin.h"

class CMetadataValue {
public:
    explicit CMetadataValue(IPlugin *owningPlugin);

    IPlugin *getOwningPlugin();

protected:
    IPlugin *owningPlugin;


};


#endif //LEVITATE_CMETADATAVALUE_H
