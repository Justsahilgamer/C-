/*This is a c++ program to find the area and circumference of a circle */
#include<iostream>
using namespace std;
class circle
{
   private: 
   float x,y,r;
   float area1,circumf;
   public:
   void assign();
   void area();
   void circum();
   void print();
};
void circle::assign()
{ 
   cout<<"type the x and y co-ordinates= ";
   cin>>x>>y;
   cout<<"type the radius= ";
   cin>>r;   
}
void circle::area()
{
   area1=3.14*r*r;
}
void circle::circum()
{
   circumf=2*3.14*r;
     
}
void circle::print()
{
cout<<"x,y co-ordinates = "<<x<<y;
cout<<" the radius = "<<r;
cout<<" the area = "<<area1;
cout<<" the circumference = "<<circumf;
}
int main()
{
   circle cl;
   cl.assign();
   cl.area();
   cl.circum();
   cl.print();
}
