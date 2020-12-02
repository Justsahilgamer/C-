/*This is a C++ program to find number of alphabets (except vowels) in sentences */
#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int i,m=0;
    cout<<"enter a sentence = ";
    cin.get(str,50);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '|| str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
        
        }
        else
        {
            m++;
        }
        
    }
 cout<<"number of alphabets (except vowels) = "<<m<<"\t"<<"\t"<<"\t"<<"\t";
}