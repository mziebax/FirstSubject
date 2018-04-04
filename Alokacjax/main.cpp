#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Villager{
private:
     const static  int tablicaSize=6;
    string tab[tablicaSize]={"Marcin","Julia","Tomasz","Karolina","Artur","Inga"};
    string imie;
    unsigned int wiek;
    unsigned int maxWiek;
    // true-mezczyzna false-kobieta
    bool plec;
public:
    Villager()
    {
        int losowaLiczba=rand()%tablicaSize;
        imie=tab[losowaLiczba];
        maxWiek=rand()%101;
        wiek=0;
        if(losowaLiczba%2==0)
        {
            plec=true;
        }
        else
        {
            plec=false;
        }
        cout<<imie<<" "<<wiek<<" "<<maxWiek<<" "<<plec<<endl;
    }
    Villager(string imie,unsigned int wiek,unsigned int maxWiek,bool plec)
    {
        this->imie=imie;
        this->wiek=wiek;
        this->maxWiek=maxWiek;
        this->plec=plec;
        cout<<imie<<" "<<wiek<<" "<<maxWiek<<" "<<plec<<endl;
    }
    void nextYear()
    {
        if(wiek==maxWiek)
        {
            cout<<"Masz juz "<<wiek<<"I twoj wiek maksymalny to rowniez "<<maxWiek<<endl;
            delete this;
        }
        else{
            this->wiek++;
        }
    }
    ~Villager()
    {
        cout<<"Wlasnie umiera " <<imie<<" "<<wiek<<" "<<plec;
    }
    string getImie()
    {
        return imie;
    }
    unsigned int getWiek()
    {
        return wiek;
    }
    bool getPlec()
    {
        return plec;
    }
    unsigned int getMaxWiek(){
    return maxWiek;
    }
};
class Household{
private:
    Villager** villagers;
    int tabSize;
public:
    Household(int tabSize)
    {
        this->tabSize=tabSize;
        villagers=new Villager*[tabSize];
    }
    Villager** getVillagers()
    {
        return villagers;
    }
    void increaseAll()
    {
        for(int i=0;i<tabSize;i++)
        {
            if(villagers[i]!=NULL)
            {
                villagers[i]->nextYear();
            }
        }
    }
    int makeChildren()
    {
        Villager* mezczyzna;
        Villager* kobieta;
        bool czyMezczyzna=false;
        bool czyKobieta=false;
        bool czyMiejsce=false;
        bool czyDziecko=true;
        int miejsce=-1;
        for(int i=0;i<tabSize;i++)
        {
            if(villagers[i]==NULL)
            {
                czyMiejsce=true;
                miejsce=i;
            }
            else
            {
                Villager* x=villagers[i];
                if(x->getWiek()>18&&x->getWiek()<40&&x->getWiek()<x->getMaxWiek())
                {
                    if(x->getPlec())
                        czyMezczyzna=true;
                    else
                        czyKobieta=true;
                }
                if(x->getWiek()<5)
                    czyDziecko=false;

            }
        }
        if(czyDziecko&&czyKobieta&&czyMezczyzna&&czyMiejsce)
        return miejsce;
        return -1;
    }
    bool doChildren()
    {
        int x=makeChildren();
        if(x!=-1)
        {
            Villager* villager=new Villager();
            villagers[x]=villager;
            return true;
        }
        return false;
    }
};
int main()
{
    Household* household=new Household(5);
    Villager* villagerOne=new Villager("Sylwia",29,29,false);
    Villager* villagerThree=new Villager("Jan",36,52,true);
    household->getVillagers()[0]=villagerOne;
    //household->getVillagers()[1]=villagerTwo;
    household->getVillagers()[2]=villagerThree;
    cout<<household->doChildren()<<endl;

}
