#include<iostream>
using namespace std;
class abc
{
    int no1,no2;
    public:
    void getnumber(int,int);
    void display();
    void operator-();
};
void abc::getnumber(int a,int b)
{
    no1=a;
    no2=b;
}
void abc::display()
{
    cout<<no1<<"\t";
    cout<<no2<<"\t";
}
void abc::operator-()
{
    no1=-no1;
    no2=-no2;
}
int main()
{
    int x,y;
    cout<<"enter the first negative number to overload = ";
    cin>>x;
    cout<<"enter the second positive number to overload = ";
    cin>>y;
    abc obj;
    obj.getnumber(x,y);
    cout<<" before overloading ";
    obj.display();
    cout<<" after overloading ";
    obj .operator-();
    obj.display();
}
