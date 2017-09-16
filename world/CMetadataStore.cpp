//
// Created by axoford12 on 9/16/17.
//

#include "CMetadataStore.h"
void CMetadataStore::set(IMetadata *subject, string &key, CMetadataValue value) throw(CNullPointerException){
    IPlugin *owningPlugin = value.getOwningPlugin();
    if (owningPlugin == nullptr) {
        throw CNullPointerException();
    }
    string k = this->disambiguate(subject, key);
    this->metadataMap[k][owningPlugin] = value;

}

map<IPlugin *, CMetadataValue> CMetadataStore::get(IMetadata *subject, string &key) throw(CNullPointerException){
    this->set(subject,key, nullptr);
    string k = this->disambiguate(subject, key);
    auto it = this->metadataMap.find(k);
    if (it == this->metadataMap.end()) {
        return (*it).second;
    }
    throw CKeyNotFoundException();
}

bool CMetadataStore::has(IMetadata* subject, string &key, IPlugin *owningPlugin) {
    string k = this->disambiguate(subject,key);
    auto it = this->metadataMap.find(k);
    return it == this->metadataMap.end();
}

void CMetadataStore::remove(IMetadata *subject, string& key, IPlugin *owningPlugin) throw(CNullPointerException){
    if(owningPlugin == nullptr) {
        throw CNullPointerException();
    }
    string k = this->disambiguate(subject,key);
    auto entry = this->metadataMap.find(k);
    if(entry == this->metadataMap.end()){
        return;
    }
    (*entry).second.erase(owningPlugin);
    if((*entry).second.empty()){
        this->metadataMap.erase(entry);
    }
}

void CMetadataStore::invalidateAll(IPlugin *owningPlugin) {
    if(owningPlugin == nullptr){
        throw CNullPointerException();
    }
    for (auto &it : this->metadataMap) {
        for (auto &it2 : it.second) {
            if(it2.first == owningPlugin){
                (it2).second.invalidate();
            }
        }
    }
}
