#include<iostream>
using namespace std;
class temperature
{
    public:
    float c,f,i;
    void celsius();

};
void temperature::celsius()
{
    cout<<"enter the temperature in farenheit = ";
    cin>>f;
    c=(f-32)*5/9;
    cout<<" value of temperture in celsius is "<<c<<"\n";
}
int main()
{
    temperature t;
    t.celsius();
}
