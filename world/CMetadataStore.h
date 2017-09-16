//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CMETADATASTORE_H
#define LEVITATE_CMETADATASTORE_H

#include <string>
#include "IMetadata.h"
#include "exception/CKeyNotFoundException.h"
#include "exception/CNullPointerException.h"

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
    void set(IMetadata *subject, string &key, CMetadataValue value) throw(CNullPointerException);

    /**
     *
     * @param subject
     * @param key
     * @return map
     * @throw CKeyNotFoundException
     */
    map<IPlugin *, CMetadataValue> get(IMetadata *subject, string &key) throw(CKeyNotFoundException);

    bool has(IMetadata *subject, string &key, IPlugin *owningPlugin);

    void remove(IMetadata* subject,string& key,IPlugin* owningPlugin) throw(CNullPointerException);

    void invalidateAll(IPlugin* owningPlugin);
    virtual string disambiguate(IMetadata *subject, string key) = 0;

private:
    map<string, map<IPlugin *, CMetadataValue>> metadataMap;
};


#endif //LEVITATE_CMETADATASTORE_H
