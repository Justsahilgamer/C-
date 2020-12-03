/*This is a C++ program to find out whether the entered number is Armstrong or not */
#include<iostream>
using namespace std;
int main()
{
    long int no,sum=0,rem,a;
    cout<<"enter a number = ";
    cin>>no;
    a=no;
    while(no!=0)
    {
        rem=no%10;
        sum=sum+(rem*rem*rem);
        no=no/10;         
    }
    if(a==sum)
    {
        cout<<"it is armstrong "<<"\t";
    }
    else
    {
        cout<<"it is not armstrong"<<"\t";
    }
}