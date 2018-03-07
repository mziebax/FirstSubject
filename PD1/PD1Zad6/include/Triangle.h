#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"

class Triangle
{
    public:
        Triangle();
        Triangle(Point a,Point b,Point c);
        float perimeter();
        float field();
        Point getA();
        Point getB();
        Point getC();

    protected:

    private:
        Point a;
        Point b;
        Point c;
};

#endif // TRIANGLE_H
