#include<iostream>
using namespace std;
int main()
{
    int num,fact=1,i;
    cout<<"enter a number to find its factorial";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
cout<<" factorial of "<<num<<" is "<<fact;
}