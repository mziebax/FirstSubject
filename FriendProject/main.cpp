#include <iostream>
#include <stdexcept>
using namespace std;
class Point{

private:
    float x;
    float y;
public:
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }

    friend istream& operator>> (istream &st, Point &point);
    friend ostream& operator<<(ostream &st,Point &point);
};
istream& operator>>(istream &st, Point &point)
{
    st>>point.x;
    st>>point.y;
    return  st;
}
ostream& operator<<(ostream &st,Point &point)
{
    st<<point.x<<" "<<point.y<<endl;
    return st;
}

class Points{
private:
    Point** tab;
    int sizeTab;
public:
    Points(int sizeTab)
    {
        this->sizeTab=sizeTab;
        tab=new Point*[sizeTab];
    }
    Point& operator[](int x)
    {
        try
        {
            if(x>=sizeTab)
            {
                throw out_of_range("fsd");
            }
            return *tab[x];
        }
        catch(out_of_range &m)
        {
            cout<<"Hello"<<endl;
        }
    }

    friend ostream& operator<< (ostream &st,Points &points)
    {
        for(int i=0;i<points.sizeTab;i++)
        {
            st<<points.tab[i];
         }
    }
};

int main(int argc, char *argv[])
{
    Point p;
    Points x=Points(2);
    for(int i=0;i<2;i++)
    {
        cin>>p;
    }
   x[5];

    return 0;
}
