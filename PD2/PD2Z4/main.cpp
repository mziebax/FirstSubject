#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string wzor;
    cin>>wzor;
    string zastepczy="a";
    for(int i=1;i<wzor.length();i++)
    {
        zastepczy=zastepczy+"a";
    }
    cout<<zastepczy;
    fstream plik;
    plik.open("plik.txt",ios::in);
    string text;
    int licznik=0;
    if(!plik.good())
    {
        cout<<"Pliku nie mozna otworzyc"<<endl;
        exit(0);
    }
    while(!plik.eof())
    {
        getline(plik,text);
        cout<<text<<endl;
        size_t x=text.find(wzor);
        cout<<x<<endl;
        while(x!=string::npos)
        {
            cout<<"druga"<<endl;
            licznik++;
            text.replace(x,wzor.length(),zastepczy);
            x=text.find(wzor);
        }
    }
    cout<<licznik<<endl;
    plik.close();

}
