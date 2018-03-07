#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
    float x;
    float y;
public:
    Point(float x,float y)
    {
        this->x=x;
        this->y=y;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    float distance (Point p1,Point p2)
{
    return sqrt(pow(p1.getX()-p2.getX(),2)+pow(p1.getY()-p2.getY(),2));
}
};

int main()
{
    Point p1=Point(3.2,2.6);
    Point p2=Point(1.6,2.3);
    cout << p2.distance(p1,p2)<< endl;
    return 0;
}
