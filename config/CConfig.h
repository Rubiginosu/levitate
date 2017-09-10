//
// Created by axoford12 on 9/10/17.
//

#ifndef LEVITATE_CONFIG_H
#define LEVITATE_CONFIG_H
#include <string>
#include <map>
using namespace std;
class CConfig {

public:
    explicit CConfig(string filename);
    string getAttr(string s);
private:
    map<string,string> configData;
    void processAttributes(string s);
};


#endif //LEVITATE_CONFIG_H
