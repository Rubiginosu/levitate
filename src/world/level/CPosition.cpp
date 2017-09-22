//
// Created by axoford12 on 9/16/17.
//

#include "CPosition.h"

CPosition::CPosition() {
    this->x = 0;
    this->y = 0;
    this->z = 0;
    this->level = nullptr;
}

CPosition::CPosition(int x) {
    this->x = x;
    this->y = 0;
    this->z = 0;
    this->level = nullptr;
}

CPosition::CPosition(int x, int y) {
    this->x = x;
    this->y = y;
    this->z = 0;
    this->level = nullptr;
}

CPosition::CPosition(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->level = nullptr;
}

CPosition::CPosition(int x, int y, int z, CLevel *level) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->level = level;
}

CLevel *CPosition::getLevel() const {
    return level;
}

void CPosition::setLevel(CLevel *level) {
    CPosition::level = level;
}

void CPosition::getSide(int side, int step) {

}

void CPosition::getSide(int side) {
    this->getSide(side,0);
}

bool CPosition::isValid() {
    return this->level != nullptr;
}

bool CPosition::setStrong() {
    return false;
}

bool CPosition::setWeak() {
    return false;
}

void CPosition::setPosition(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

ostream &operator<<(ostream &out, CPosition &position) {
    out << "Position(level="
        << (position.isValid()? position.getLevel()->getName() : "null")
        << "x="
        << position.x
        << "y="
        << position.y
        << "z="
        << position.z;
    return out;
}


