//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_CPOSITION_H
#define LEVITATE_CPOSITION_H


#include "../CVector3.h"
#include "CLevel.h"

class CPosition : public CVector3 {
public:
    CLevel *level;

    CPosition();

    CPosition(int x);

    CPosition(int x, int y);

    CPosition(int x, int y, int z);

    CPosition(int x,int y,int z,CLevel* level);

};


#endif //LEVITATE_CPOSITION_H
