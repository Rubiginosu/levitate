//
// Created by axoford12 on 9/13/17.
//

#include "CPacket.h"

string CPacket::get(unsigned int length, unsigned int offset) {
    return this->buffer.substr(length,offset);
    return std::__cxx11::string();
}
