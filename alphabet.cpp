/*This is a C++ code to find number of specific alphabets in a given sentence
NOTE- please change the "j" and "J" to any another alphabet to find (if you want) */
#include<iostream>
using namespace std;
int main()
{
    char str[20];
    int i,m=0;
    cout<<"enter a string of limit 20 words = ";
    cin.get(str,20);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='j'|| str[i]=='J') /*change the alphabet "j" to any other you want to find */
        {
            m++;
        }
    }
    cout<<"the occurence of j in the entered string is "<<m<<" times"<<"\t"<<"\t";
}