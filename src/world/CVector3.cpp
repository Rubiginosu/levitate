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

