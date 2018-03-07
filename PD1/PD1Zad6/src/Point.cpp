#include "Point.h"

Point::Point(float x,float y)
{
    this->x=x;
    this->y=y;
}
Point::Point()
{

}
float Point::getX()
{
    return x;
}
float Point::getY()
{
    return y;
}
 float Point::distance(Point p1,Point p2)
{
    return sqrt(pow(p1.getX()-p2.getX(),2)+pow(p1.getY()-p2.getY(),2));
}


