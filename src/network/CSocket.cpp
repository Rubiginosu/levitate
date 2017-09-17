//
// Created by axoford12 on 9/10/17.
//

#include "CSocket.h"


#ifdef LINUX
#include <sys/socket.h>
#include <netinet/in.h>
#include <sstream>
#endif
CSocket::CSocket(CConfig* c) {
#ifdef LINUX
    this->socketFileDescriptor = socket(AF_INET,SOCK_DGRAM,0);
    sockaddr_in s{};
    string port_s = c->getAttr("port");
    uint16_t  port = 19132;
    if(!port_s.empty()){
        istringstream iss(port_s);
        iss >> port;
    }
    s.sin_family = AF_INET;
    s.sin_port = htons(port);
    s.sin_addr.s_addr = htonl(INADDR_ANY);

    if(bind(this->socketFileDescriptor,(sockaddr*)&s,sizeof(s)) == -1){
        exit(-1);
    }  else {
    }
#endif
}
