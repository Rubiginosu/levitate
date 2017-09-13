//
// Created by axoford12 on 9/10/17.
//

#include "CSocket.h"


#ifdef LINUX
#include <sys/socket.h>
#include <netinet/in.h>
#include <sstream>
#include "../utils/format_output.h"
CSocket::CSocket(CConfig* c) {
#ifdef LINUX
    this->socketFileDescriptor = socket(AF_INET,SOCK_DGRAM,0);
    sockaddr_in s{};
    string port_s = c->getAttr("port");
    uint16_t  port = 19132;
    if(port_s.empty())
        out("Port information not found.using 19132.");
    else{
        istringstream iss(port_s);
        iss >> port;
    }
    s.sin_family = AF_INET;
    s.sin_port = htons(port);
    s.sin_addr.s_addr = htonl(INADDR_ANY);

    out("Attempting to bind port on:" + port_s);
    if(bind(this->socketFileDescriptor,(sockaddr*)&s,sizeof(s)) == -1){
        out("Error occurred on binding port.");
        exit(-1);
    }  else {
        out("Bind done.");
    }
#endif
}
