//
// Created by axoford12 on 9/14/17.
//

#ifndef LEVITATE_CFORMAT_H
#define LEVITATE_CFORMAT_H
#include <ostream>
#include <map>
#include "BLanguage.h"

using namespace std;
class CFormat :public ostream{
private:
    BLanguage lanpkg;
    ostream& rawOutput(string s);
public:
    explicit CFormat(BLanguage pkg);
    ostream& output(const string& s);
    string parseToString(const string& s);
};
#endif //LEVITATE_CFORMAT_H
