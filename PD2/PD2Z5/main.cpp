#include <iostream>
#include <string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    string sciezka="liczby.txt";
    fstream plik;
    plik.open(sciezka.c_str(),ios::in);
    if(!plik.good())
    {
        cout<<"Cos nie tak"<<endl;
        exit(0);
    }
    string linia;
    int suma;
    while(!plik.eof())
    {
        suma=0;
        getline(plik,linia);
        for(int i=0;i<linia.length();i=i+2)
        {
            int liczba=linia[i]-'0';
            suma+=liczba;
        }
        cout<<suma<<endl;

    }
    plik.close();
}
