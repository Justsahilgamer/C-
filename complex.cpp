/*Program for Complex number and Sum*/
#include<iostream>
using namespace std;
class complex
{
    float x,y;
    public:
    complex(){}
    complex(float real,float img)
    {
        x=real;
        y=img;
    } 
   complex operator+(complex);
   void display(void);
};
complex complex::operator+(complex c)
{
    complex t;
    t.x=x+c.x;
    t.y=y+c.y;
    return(t);
};
void complex::display(void)
{
    cout<<x<<"+j"<<y;
}
int main()
{
    complex c1,c2,c3;
    c1=complex(2.5,3.5);
    c2=complex(1.6,2.7);
    c3=c1+c2;
    cout<<" complex numbers: ";
    cout<<" c1= ";c1.display();
    cout<<" c2= ";c2.display();
    cout<<" c3= ";c3.display();
}
