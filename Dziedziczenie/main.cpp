#include <iostream>
#include<cstdbool>
#include<stdlib.h>
using namespace std;
class User{
protected :
    string login;
    string password;
public:
    string getLogin()
    {
        return login;
    }
    string getPassword()
    {
        return password;
    }

    User(string login,string password)
    {
        this->login=login;
        this->password=password;
    }
    bool authorize(string login,string password)
    {
        if(login==this->login&&password==this->password)
            return true;
        return false;
    }
};
class Student: public User{
private:
    int semestr;
public:
    Student(string login,string password,int semestr) : User(login,password)
    {
        this->semestr=semestr;
    }
    int getSemestr()
    {
        return semestr;
    }

};
class Subject{
private:
    string subject;
    int students;
    Student* studentList[100];
    int countStudent=0;
public:
    Subject(string subject,int students)
    {
        this->subject=subject;
        this->students=students;
    }
    Student* getList(int i)
    {
        return studentList[i];
    }

    bool addStudent(Student* student)
    {
        if(countStudent==students-1)
        {
            cout<<"Przykro mi ale nie ma juz miejsc";
            return false;
        }
        studentList[countStudent]=student;
        countStudent++;
        cout<<"Uzytkownik dodany"<<endl;
        return true;
    }
    Student* czyJest(int x,bool* exist)
    {
        cout<<countStudent<<endl;
        if(countStudent<x)
        {
            return NULL;
        }
        *exist=true;
        return studentList[x];
    }
};

int main(int argc, char *argv[])
{
    Student user=Student("root","user",3);
    Subject temat=Subject("historia",100);
    Student x=Student("xyz","abc",2);
    int index=0;
    bool zmienna=false;
    if(user.authorize("root","user"))
    {
        cout<<"dobrze"<<user.getSemestr()<<endl;

    }
    else
    {
        cout<<"zle"<<endl;
    }
    temat.addStudent(&user);
       Student* m=temat.czyJest(index,&zmienna);
    if(zmienna)
    {
        cout<<"Jest taki student"<<endl;
        cout<<m->getLogin()<<endl;
    }
    else
    {
        cout<<"Nie ma takiego studenta"<<endl;
    }
    return 0;
}
