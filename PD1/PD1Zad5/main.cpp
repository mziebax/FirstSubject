#include <iostream>
#include "Point.h"
#include <cmath>
using namespace std;
 float distancex (Point p1,Point p2)
{
    return sqrt(pow(p1.getX()-p2.getX(),2)+pow(p1.getY()-p2.getY(),2));
}
int main()
{
    Point p1=Point(3.2,5.1);
    Point p2=Point(1.4,7.1);
    cout << distancex(p1,p2) << endl;
    return 0;
}
