//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_EXCEPTION_H
#define LEVITATE_EXCEPTION_H

#include <string>

using namespace std;

class IException {
public:
    virtual string message() = 0;
};


#endif //LEVITATE_EXCEPTION_H
