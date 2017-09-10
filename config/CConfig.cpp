//
// Created by axoford12 on 9/10/17.
//

#include <fstream>
#include <iostream>
#include "CConfig.h"

CConfig::CConfig(string filename) {
    ifstream config(filename);
    if (config.is_open()) {
        string s;
        while (getline(config, s)) {
            if(s[0] == '#')
                continue;
            cout << s << endl;
            for (;;) {
                string a(" ");
                size_t index = s.find(a);
                if (index == string::npos)
                    break;
                s.erase(index, 1);
            }
            this->processAttributes(s);
        }
    } else {
        cout << "could not open config file." << endl;
    }
}

void CConfig::processAttributes(string s) {
    size_t pos;
    string cha("=");
    pos = s.find(cha);
    if (pos == string::npos)
        return;
    string attrName = s.substr(0, pos);
    string attrValue = s.substr(pos + 1);
    this->configFile[attrName] = attrValue;
}

string CConfig::getAttr(string s) {
    map<string, string>::iterator it;
    it = this->configFile.find(s);
    if (it == this->configFile.end()) {
        return "";
    }
    return this->configFile[s];
}
