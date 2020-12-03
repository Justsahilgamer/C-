/*This is a C++ code to find L.C.M of numbers */
#include<iostream>
using namespace std;
int main()
{
    int lcm=0,a,b,i,max;
    cout<<"enter 1st number - ";
    cin>>a;
    cout<<"enter 2st number - ";
    cin>>b;

    if(a>b)
    {
        max=a;
    }
    else 
    {
        max=b;
    }
    for(i=max;i>=a&&i>=b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            lcm=i;
            break;
        }
    }
    cout<<"the lcm of the numbers "<<a<<" and "<<b<<" is "<<lcm<<"\t";
}
