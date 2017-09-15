//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CMETADATASTORE_H
#define LEVITATE_CMETADATASTORE_H

#include <string>
#include "IMetadata.h"

using namespace std;

class CMetadataStore {
public:
    /**
     *
     * @param subject
     * @param key
     * @param value
     * @throw CNullPointerException
     */
    void set(IMetadata* subject,string& key,CMetadataValue value);

    CMetadataValue* get(IMetadata* subject,string& key);
    virtual string disambiguate(IMetadata* subject, string key) = 0;
private:
    map<string,map<IPlugin,CMetadataValue>> metadataMap;
};


#endif //LEVITATE_CMETADATASTORE_H
