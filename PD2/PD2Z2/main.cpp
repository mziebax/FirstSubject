#include <iostream>

using namespace std;

int main()
{
    string pierwszyNapis;
    string drugiNapis;
    string trzeciNapis;
    getline(cin,pierwszyNapis);
    cin>>drugiNapis;
    cin>>trzeciNapis;
    size_t pos=pierwszyNapis.find(drugiNapis);
    if(pos!=string::npos)
    {
        pierwszyNapis.replace(pos,drugiNapis.length(),trzeciNapis);
    }
    cout<<pierwszyNapis<<endl;
}
