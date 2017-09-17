//
// Created by axoford12 on 9/14/17.
//

#include <iostream>
#include "CFormat.h"
ostream& CFormat::rawOutput(string s) {
    time_t timeNow;
    time(&timeNow);
    tm* t;
    t = gmtime(&timeNow);
    cout <<"[" << t->tm_hour+8 << ":" << t->tm_min << ":" << t->tm_sec << "]" << s  << endl;
    return cout;
}

string CFormat::parseToString(const string& s) {
    return this->lanpkg.data[s];
}
ostream& CFormat::output(const string& s) {
    return rawOutput(parseToString(s));
}

CFormat::CFormat(const BLanguage pkg) {
    this->lanpkg = pkg;
}
