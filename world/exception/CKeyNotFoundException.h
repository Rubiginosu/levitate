//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CKEYNOTFOUNDEXCEPTION_H
#define LEVITATE_CKEYNOTFOUNDEXCEPTION_H


#include "IException.h"

class CKeyNotFoundException : public IException{
public:
    string message() override;
};

#endif //LEVITATE_CKEYNOTFOUNDEXCEPTION_H
