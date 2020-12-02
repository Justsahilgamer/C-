/*this is a c++ program to add the digits
example- Number- 23  sum-2+3=5   */
#include<iostream>
using namespace std;
int main()
{
    int no,sum=0,rem;
    cout<<"enter a no ";
    cin>>no;
    while(no!=0)
    {
        rem=no%10;
        sum=sum+rem;
        no=no/10;        
    }
cout<<" sum of the number = "<<sum;
}
