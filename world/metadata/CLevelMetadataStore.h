//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CLEVELMETADATASTORE_H
#define LEVITATE_CLEVELMETADATASTORE_H


#include "CMetadataStore.h"
#include "../exception/CIllegalArgumentException.h"
class CLevelMetadataStore : public CMetadataStore{
public:
    string disambiguate(IMetadata *subject, string& key) throw(CIllegalArgumentException) override;
};


#endif //LEVITATE_CLEVELMETADATASTORE_H
