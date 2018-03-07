#ifndef POINT_H
#define POINT_H
#include<cmath>

class Point
{
    public:
        Point(float x,float y);
        Point();
    float getX();
    float getY();
    float distance(Point p1,Point p2);

    protected:

    private:
        float x;
        float y;
};

#endif // POINT_H
