//
// Created by axoford12 on 9/10/17.
//

#include "CVector3.h"

CVector3::CVector3(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

double CVector3::getX() const {
    return x;
}

double CVector3::getY() const {
    return y;
}

double CVector3::getZ() const {
    return z;
}

double CVector3::getFloorX() const {
    return (int) x;
}

double CVector3::getFloorY() const {
    return (int) y;
}

double CVector3::getFloorZ() const {
    return (int) z;
}

void CVector3::add(double x, double y, double z) {
    this->x += x;
    this->y += y;
    this->z += z;
}

void CVector3::getSide(SIDE side, double step) {
    switch (side){
        case SIDE_DOWN:
            this->y -= step;
            break;
        case SIDE_UP:
            this->y += step;
            break;
        case SIDE_NORTH:
            this->z -= step;
            break;
        case SIDE_SOUTH:
            this->z += step;
            break;
        case SIDE_WEST:
            this->x -= step;
            break;
        case SIDE_EAST:
            this->x += step;
    }
}

void CVector3::getSide(SIDE side) {
    this->getSide(side,1);
}

SIDE CVector3::getOppositeSide(SIDE side) {
    switch(side){
        case SIDE_DOWN:
            return SIDE_UP;
        case SIDE_UP:
            return SIDE_DOWN;
        case SIDE_NORTH:
            return SIDE_SOUTH;
        case SIDE_SOUTH:
            return SIDE_NORTH;
        case SIDE_WEST:
            return SIDE_EAST;
        case SIDE_EAST:
            return SIDE_WEST;
    }
}

