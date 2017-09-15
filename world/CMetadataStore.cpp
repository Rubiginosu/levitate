//
// Created by axoford12 on 9/16/17.
//

#include "CMetadataStore.h"
#include "./exception/CNullPointerException.h"

void CMetadataStore::set(IMetadata *subject, string &key, CMetadataValue value) {
    IPlugin *owningPlugin = value.getOwningPlugin();
    if (owningPlugin == nullptr) {
        throw CNullPointerException();
    }
}

CMetadataValue *CMetadataStore::get(IMetadata *subject, string &key) {
    string k = this->disambiguate(subject,key);
    // TODO Implement.
}
