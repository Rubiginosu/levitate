//
// Created by axoford12 on 9/10/17.
//

#ifndef LEVITATE_ISOCKET_H
#define LEVITATE_ISOCKET_H


#include "CPackage.h"

class ISocket {
    virtual void send(CPackage pkg) = 0;
    virtual CPackage recv() = 0;
    virtual void close() = 0;
};


#endif //LEVITATE_ISOCKET_H
