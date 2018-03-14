#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    string napis;
    cin>>napis;
    transform(napis.begin(),napis.end(),napis.begin(),::tolower);
    char najwiekszy=napis[0];
    char najmniejszy=napis[0];
    for(int i=0;i<napis.length();i++)
    {
        if(napis[i]>najwiekszy)
            najwiekszy=napis[i];
        if(napis[i]<najmniejszy)
            najmniejszy=napis[i];
    }
    cout<<najwiekszy<<endl;
    cout<<najmniejszy<<endl;
    return 0;
}
