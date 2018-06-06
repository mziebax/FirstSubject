#include <iostream>

using namespace std;
class Samochod{
private:
    string color;
    string brand;
    string type;
    int value;
public:
    Samochod(){}
    Samochod(string color,string brand,string type,int value)
    {
        this->brand=brand;
        this->color=color;
        this->type=type;
        this->value=value;
    }
    string getColor()
    {
        return color;
    }
    string getBrand()
    {
        return brand;
    }
    string getType()
    {
        return type;
    }
    int getValue()
    {
        return value;
    }
};
template<typename T>
class Element{
private:
    T elem;
    T* nextEl;
public:
    Element(T elem)
    {
        this->elem=elem;
    }
    T* getElem()
    {
        return &elem;
    }
    T* getNext()
    {
        return nextEl;
    }
    void setElem(T* nextElem)
    {
        this->nextEl=nextElem;
    }

};
template <typename U>
class MyList{
private:
    int listSize;
    Element<U>* firstElem;
    Element<U>* lastElem;
public:
    MyList()
    {
        this->listSize=0;
    }
    void addElement(Element<U>* elem)
    {
        if(firstElem==NULL)
        {
            this->firstElem=elem;
            this->lastElem=elem;
            listSize++;
        }
        else
        {
            Element<U>* x=lastElem;
            x->setElem(elem->getElem());
            this->lastElem=x;
            listSize++;
        }
    }
    void printElements()
    {
        Element<U>* it=firstElem;
        for(int i=1;i<listSize;i++)
        {
            cout<<*it<<endl;
            it=it->getNext();
        }
    }
};
int main()
{
    Samochod* s1=new Samochod("red","Audi","A8",200000);
    Samochod* s2=new Samochod("white","Mercedes","S",500000);
    Samochod* s3=new Samochod("black","Renault","r",400000);
    Samochod* s4=new Samochod("yellow","Mazda","M6",100000);
    Samochod* s5=new Samochod("green","Ferrari","T",800000);
    Element<Samochod>* el1=new Element<Samochod>(*s1);
    Element<Samochod>* el2=new Element<Samochod>(*s1);
    Element<Samochod>* el3=new Element<Samochod>(*s1);
    Element<Samochod>* el4=new Element<Samochod>(*s1);
    Element<Samochod>* el5=new Element<Samochod>(*s1);
    MyList<Samochod>* mylist=new MyList<Samochod>();
    mylist->addElement(el1);
    return 0;
}
