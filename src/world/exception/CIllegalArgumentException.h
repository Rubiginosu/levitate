//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CILLEGALARGUMENTEXCEPTION_H
#define LEVITATE_CILLEGALARGUMENTEXCEPTION_H


#include "IException.h"

class CIllegalArgumentException : public IException{
public:
    string message() override ;
};


#endif //LEVITATE_CILLEGALARGUMENTEXCEPTION_H
