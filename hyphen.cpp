/*This is a c++ program to apply hyphen in your sentence
example: what-is-your-name?*/
#include<iostream>
using namespace std;
int main()
{
    char str[80];
    int i,j;
    cout<<"enter the sentence=";
    cin.get(str,80);
    for ( i = 0;str[i]!='\0'; i++)
    {
       if(str[i]==' ')
       {
           str[i]='-';
       }
    }
    cout<<"sentence with hyphen is=";
    for(j=0;str[j]!='\0';j++)
    {
        cout<<str[j];
    }
}
