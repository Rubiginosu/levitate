//
// Created by axoford12 on 9/10/17.
//

#ifndef LEVITATE_CVECTOR3_H
#define LEVITATE_CVECTOR3_H
enum SIDE{
    SIDE_DOWN,
    SIDE_UP,
    SIDE_NORTH,
    SIDE_SOUTH,
    SIDE_WEST,
    SIDE_EAST
};

class CVector3 {
public:
    explicit CVector3(double x = 0, double y = 0, double z = 0);

    double getX() const;

    double getY() const;

    double getZ() const;

    double getFloorX() const;

    double getFloorY() const;

    double getFloorZ() const;

    void add(double x = 0,double y = 0,double z = 0);

    void getSide(SIDE side);

    void getSide(SIDE side,double step);

    SIDE getOppositeSide(SIDE side);
protected:
    double x, y, z;
};
#endif //LEVITATE_CVECTOR3_H
