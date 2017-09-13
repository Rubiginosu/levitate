//
// Created by axoford12 on 9/13/17.
//

#ifndef LEVITATE_CPACKET_H
#define LEVITATE_CPACKET_H


#include "Consts.h"
#include<string>
using namespace std;
class CPacket {
public:
    PacketID id;
    string buffer;
    int sendTime;
protected:
    string get(unsigned int length,unsigned int offset);
};


#endif //LEVITATE_CPACKET_H
