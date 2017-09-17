//
// Created by axoford12 on 9/14/17.
//

#ifndef LEVITATE_CZH_CN_H
#define LEVITATE_CZH_CN_H


#include "../../BLanguage.h"

class CZh_CN: public BLanguage{
public:
    CZh_CN(){
        (this->data)[LANGUAGE_HELLO] = "欢迎来到Levitate.";
    }
};


#endif //LEVITATE_CZH_CN_H
