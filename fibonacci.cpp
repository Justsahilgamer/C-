/*This is a C++ program to find out Fibonacci series */
#include<iostream>
using namespace std;
int main()
{
    int f=0,f1=0,f2=1,i;
    cout<<"fibonacci series : ";
    cout<<f1<<"\t"<<f2;
    for(i=2;i<15;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<"\t"<<f<<"\t";
    }
}
