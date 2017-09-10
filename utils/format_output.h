//
// Created by axoford12 on 9/10/17.
//
#ifndef LEVITATE_FORMAT_OUTPUT_H
#define LEVITATE_FORMAT_OUTPUT_H
#include <iostream>
using namespace std;
void out(string s){
    time_t timeNow;
    time(&timeNow);
    tm* t;
    t = gmtime(&timeNow);
    cout <<"[" << t->tm_hour+8 << ":" << t->tm_min << ":" << t->tm_sec << "]" << s  << endl;
}
#endif //LEVITATE_FORMAT_OUTPUT_H
