//
// Created by axoford12 on 9/16/17.
//

#include "CLevelMetadataStore.h"
#include "../level/CLevel.h"

string CLevelMetadataStore::disambiguate(IMetadata *subject, string& key) {
    auto level = dynamic_cast<CLevel*>(subject);
    if(level == nullptr){
        throw CIllegalArgumentException();
    }
}
