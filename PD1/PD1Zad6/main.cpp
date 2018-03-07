#include <iostream>
#include "Triangle.h"
#include "Point.h"
using namespace std;

int main()
{
    Point a=Point(3.0,3.0);
    Point b=Point(3.0,6.0);
    Point c=Point(7.0,3.0);
    Triangle triangle=Triangle(a,b,c);
    cout<<triangle.perimeter()<<endl;
    cout<<triangle.field()<<endl;
}
