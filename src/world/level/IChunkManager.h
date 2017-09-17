//
// Created by axoford12 on 9/16/17.
//

#ifndef LEVITATE_ICHUNKMANAGER_H
#define LEVITATE_ICHUNKMANAGER_H


class IChunkManager {
public:
    virtual int getBlockIdAt(int x,int y,int z) = 0;
    virtual void setBlockIdAt(int x,int y,int z,int id) = 0;
    virtual int getBlockDataAt(int x,int y,int z) = 0;
    virtual void setBlockDataAt(int x,int y,int z,int data) = 0;

};


#endif //LEVITATE_ICHUNKMANAGER_H
