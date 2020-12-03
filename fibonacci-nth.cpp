/*This is a C++ code to find out Fibonacci series till the given n th term */
#include<iostream>
using namespace std;
int main()
{
    int f=0,f1=0,f2=1,i,n;
    cout<<"enter the value of n to print n terms - ";
    cin>>n;
    cout<<"fibonacci series : ";
    cout<<f1<<"\t"<<f2;
    for(i=2;i<n;i++)
    { 
      f=f1+f2;
      f1=f2;
      f2=f;
      cout<<"\t"<<f;
    }
}
