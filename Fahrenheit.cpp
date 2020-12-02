/*This is a c++ code to convert the value of temperature (Celsius) in Fahrenheit */
#include<iostream>
using namespace std;
class temperature
{
    public:
    float f,c,i;
    void farenheit();
};
void temperature::farenheit()
{
    cout<<" enter the temperature in celsius = ";
    cin>>c;
    f=(c*9/5)+32;
    cout<<" value of temperature in farenheit is "<<f<<"\n";
}
int main()
{
    temperature t;
    t.farenheit();
}
