/*This is a C++ code for finding Gcd of two numbers */
#include<iostream>
using namespace std;
int main()
{
    int gcd=0,n1,n2,i,max;
    cout<<" enter two numbers - ";
    cin>>n1>>n2;
    
    for(i=2;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd=i;
        }
    }
    cout<<" the gcd of the numbers "<<n1<<" and "<<n2<<" is "<<gcd;
}