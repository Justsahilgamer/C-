#include<iostream>
using namespace std;

int main()
{
    float a[9],p;
    int i,top,bot,mid;
    cout<<"type numbers in ascending= ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    top=0;
    bot=9;
    cout<<"number to find= ";
    cin>>p;
    mid=(top+bot)/2;
    while ((top<=bot)&&(a[mid]!=p))
    {
        if (p,a[mid])
        bot=mid-1;
        else
        top=mid+1;
        mid=(top+bot)/2;
    }
    if(a[mid]==p)
    
        cout<<"the number is at position "<<(mid+1);
    else
       cout<<"the number didn't found ";
}
