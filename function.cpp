/*This is a c++ program for showing virtual fuction
Note- "#include<string>" can be removed because it is of no use,I wrote it due to some reasons*/
#include<iostream>
#include <cstring>
#include<string>
using namespace std;
class person
{
    public:
    person(char*s)
    {    
        name=new char[strlen(s+1)];
        strcpy(name,s);
    }
    void print()
    {
        cout<<" my name is"<<name;
    }
    protected:
    char*name;
};
class student:public person
{
    float rno;
    public:
    student (char*s,float r):person(s),rno(r)
     {}
     void print()
     {
         cout<<"my name is "<<name<<" my rno is "<<rno;
     }
};
int main()
{
person*p;
person x = (char*)" bob";
p=&x;
p->print();
person y = (char*)" tom";
p=&y;
p->print();   
}
