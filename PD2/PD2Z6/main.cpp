#include <iostream>
#include <fstream>
#include<cstdlib>
using namespace std;

int main()
{
    fstream plik;
    plik.open("normal/",ios::in);
    string napis;
    if(!plik.good())
    {
        cout<<"Plik zamkniety"<<endl;
        exit(2);
    }
    while(!plik.eof())
    {
        getline(plik,napis);
        cout<<napis<<endl;
    }
    plik.close();
}
