#include <iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
   string napis;
   getline(cin,napis);
   fstream plik;
   plik.open("wizytowka.txt",ios::out);
   if(!plik.good())
   {
       cout<<"Blad otwarcia pliku"<<endl;
       exit(0);
    }
    string text;
    getline(cin,text);
    int startString=-1;
    for(int i=0;i<text.length();i++)
    {
        if(text[i]==' ')
        {
            string n=text.substr(startString+1,i-startString);
            plik<<n<<endl;
            startString=i;
        }
    }
    string k=text.substr(startString+1,text.length()-startString);
    plik<<k;
   plik.close();
   return 0;
}
