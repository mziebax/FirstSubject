#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
//1
class Point{
private:
    float x;
    float y;
public:
    Point(float  x,float y)
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
    void setX(float x)
    {
        this->x=x;;
    }
    void setY(float y)
    {
        this->y=y;
    }

};
bool fuc(Point a,Point b)
{
    if(a.getX()!=b.getX())
        return a.getX()>b.getX();
    else
        return a.getY()-b.getY();
}
//2
vector<Point> wProstokacie(const vector<Point> x,Point upLeft,Point downRight)
{
    vector<Point>::const_iterator it=x.begin();
    float x1=upLeft.getX();
    float y1=upLeft.getY();
    float x2=downRight.getX();
    float y2=downRight.getY();
    vector<Point> ret;
    for(;it!=x.end();it++)
    {
        Point x=*it;
        if(x.getX()>x1&&x.getX()<x2&&x.getY()>y1&&x.getY()<y2)
            ret.push_back(x);
    }
    return ret;
}
//3
void foo(vector<string>::iterator it1,vector<string>::iterator it2)
{
    vector<string>::iterator i;
    for(i=it1;i!=it2;i++)
    {
        cout<<*i<<endl;
    }
}
//4
bool sortownica(int a,int b)
    {
        return a>b;
    }
vector<int> sortAndUnique(vector<int> x,vector<int> y)
{
    vector<int> m;
    for(vector<int>::iterator it1=x.begin();it1!=x.end();it1++)
    {
        int value=*it1;
        bool t=(find(m.begin(),m.end(),value)!=m.end());
        if(!t)
        {
            m.push_back(value);
        }
    }
    for(vector<int>::iterator it1=y.begin();it1!=y.end();it1++)
    {
        int value=*it1;
        bool t=(find(m.begin(),m.end(),value)!=m.end());
        if(!t)
        {
            m.push_back(value);
        }
    }
    sort(m.begin(),m.end(),sortownica);
    return m;

}
int main()
{
    //1
    vector<Point>* wektor=new vector<Point>();
    Point a=Point(2.3,3.1);
    Point b=Point(4.2,3.6);
    Point c=Point(1.7,1.7);
    Point d=Point(12.5,2.5);
    Point e=Point(3.3,3.3);
    wektor->push_back(a);
    wektor->push_back(b);
    wektor->push_back(c);
    wektor->push_back(d);
    wektor->push_back(e);
    vector<Point>::iterator i=wektor->begin();
    for(;i!=wektor->end();i++)
    {
        std::cout<<(*i).getY()<<" "<<(*i).getX()<<std::endl;
    }
    cout<<"------------------------"<<endl;
    sort(wektor->begin(),wektor->end(),fuc);
    i=wektor->begin();
    for(;i!=wektor->end();i++)
    {
        std::cout<<(*i).getY()<<" "<<(*i).getX()<<std::endl;
    }
    //2
    vector<Point> wektors;
    Point aa=Point(2.3,3.1);
    Point bb=Point(4.2,3.6);
    Point cc=Point(1.7,1.7);
    Point dd=Point(12.5,2.5);
    Point ee=Point(3.3,3.3);
    Point up=Point(2.0,2.0);
    Point down=Point(5.0,5.0);
    wektors.push_back(aa);
    wektors.push_back(bb);
    wektors.push_back(cc);
    wektors.push_back(dd);
    wektors.push_back(ee);
    vector<Point> x=wProstokacie(wektors,up,down);
    cout<<"+++++++++++++++++++++++"<<endl;
    for(vector<Point>::iterator it=x.begin();it!=x.end();it++)
    {
        cout<<(*it).getX()<<" "<<(*it).getY()<<endl;
    }
    //3
    list<string> lista;
    lista.push_back("Jola");
    lista.push_back("Tola");
    lista.push_back("Wiola");
    lista.push_back("Kola");
    lista.push_back("Mola");
    lista.push_back("Dola");
    lista.push_back("Wola");
    lista.push_back("Rola");
    list<string>::iterator iter=lista.begin();
    list<string>::iterator start=lista.begin();
    list<string>::iterator stop=lista.begin();
    start++++;
    stop++++++++;
    foo(start,stop);
    //4
    vector<int> l1;
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(1);
    l1.push_back(3);
    l1.push_back(12);
    l1.push_back(6);
    l1.push_back(4);
    l1.push_back(6);
    l1.push_back(11);
    l1.push_back(7);
    l1.push_back(6);
     vector<int> l2;
    l2.push_back(16);
    l2.push_back(13);
    l2.push_back(5);
    l2.push_back(22);
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(5);
    l2.push_back(6);
    l2.push_back(8);
    l2.push_back(11);
    l2.push_back(1);
    vector<int> f=sortAndUnique(l1,l2);
    for(int i=0;i<f.size();i++)
    {
        cout<<f[i]<<endl;
    }
    return 0;
}
