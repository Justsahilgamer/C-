/*Program to swap two digits number from a variable*/
#include<iostream>
using namespace std;
void swap(float &x, float &y)
{
    float t=x;
    x=y;
    y=t;
}
int main()
{
    void swap (float &, float &);
    float a,b;
    cout<<" enter any two numbers= ";
    cin>>a>>b;
    cout<<" before swapping";
    cout<<" a="<<a<<" b="<<b;
    swap(a,b);
    cout<<" after swapping";
    cout<<" a="<<a<<" b="<<b;
}
