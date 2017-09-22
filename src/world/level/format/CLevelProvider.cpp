//
// Created by axoford12 on 9/16/17.
//

#include "CLevelProvider.h"

bool CLevelProvider::unloadChunk(int X, int Z) {
    return this->loadChunk(X,Z, false);
}
