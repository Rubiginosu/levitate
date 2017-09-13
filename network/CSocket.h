//
// Created by axoford12 on 9/10/17.
//

#ifndef LEVITATE_CSOCKET_H
#define LEVITATE_CSOCKET_H
#include "../ConstsEnv.h"
#include "ISocket.h"
#include "../config/CConfig.h"

class CSocket:public ISocket{
public:
    explicit CSocket(CConfig* c);
    CPackage recv() override = 0;
    void close() override = 0;
#ifdef LINUX
private:
    int socketFileDescriptor;
#endif
};

#endif //LEVITATE_CSOCKET_H
