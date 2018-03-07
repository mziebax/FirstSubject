#include "Triangle.h"
Triangle::Triangle()
{

}
Triangle::Triangle(Point a,Point b,Point c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}
Point Triangle::getA()
{
    return a;
}
Point Triangle::getB()
{
    return b;
}
Point Triangle::getC()
{
    return c;
}
float Triangle::perimeter()
{
    return this->a.distance(a,b)+this->a.distance(b,c)+this->a.distance(a,c);
}
float Triangle::field(){
float m=this->getA().distance(a,b);
float n=this->getA().distance(b,c);
float o=this->getA().distance(a,c);
float p=(m+n+o)/2;
return sqrt(p*(p-m)*(p-n)*(p-o));
}
