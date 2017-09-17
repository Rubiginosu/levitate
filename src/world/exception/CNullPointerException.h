//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_NULLPOINTEREXCEPTION_H
#define LEVITATE_NULLPOINTEREXCEPTION_H


#include "IException.h"

class CNullPointerException : public IException {
public:
    string message() override;
};


#endif //LEVITATE_NULLPOINTEREXCEPTION_H
