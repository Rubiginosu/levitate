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

    CLevel *getLevel() const;

    void setLevel(CLevel *level);

    CPosition(int x, int y, int z);

    CPosition(int x,int y,int z,CLevel* level);

    bool isValid();

    bool setStrong();

    bool setWeak();

    void getSide(int side);

    void getSide(int side,int step);
};


#endif //LEVITATE_CPOSITION_H
