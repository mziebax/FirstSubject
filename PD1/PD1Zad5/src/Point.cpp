#include "Point.h"

Point::Point()
{
    //ctor
}
Point::Point(float x,float y)
{
    this->x=x;
    this->y=y;
}
float Point::getX()
{
    return this->x;
}
float Point::getY()
{
    return this->y;
}
