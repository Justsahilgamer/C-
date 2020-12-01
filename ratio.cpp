/* C++ Program for Ratio and Reciprocal */
#include<iostream>
using namespace std;
class ratio
{
    public:void assign(int,int);
    double convert();
    void invert();
    void print();
     private:
     int num,den;
};
int main()
{
int a,b;
cout<<" type a= ";
cin>>a;
cout<<" type b= ";
cin>>b;
ratio x;
x.assign(a,b);
cout<<"x=";
x.print();
cout<<"="<<x.convert();x.invert();
cout<<"\n1/x=";x.print();
cout<<"\n";
}
void ratio::assign(int numerator,int denominator)
{
    num=numerator;
    den=denominator;
}
double ratio::convert()
{
    return double((num)/den);
}
void ratio::invert()
{
    int temp=num;
    num=den;
    den=temp;
}
void ratio::print()
{
    cout<<num<<"/"<<den;
}
