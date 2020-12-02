/* This is the c++ code to find the largest number */
#include<iostream>
using namespace std;
int main()
{
    int i,j,num[10],max;
    cout<<"enter 10 random numbers";
    for(i=0;i<10;i++)
    {
        cin>>num[i];
    }
    max=num[i];
    for(j=0;j<10;j++)
    {
        if(max<num[j])
        {
            max=num[j];
        }
    }
cout<<" the largest number is "<<max;
}
