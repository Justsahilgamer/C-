#include<iostream>
using namespace std;
class student
{
    int roll_no;
    public:
    void get_no(int a)
    {
        roll_no=a;
    } 
    void put_no(void)
    {
        cout<<"roll no:"<<roll_no;
    }
};
class test:public student
{
    public:
    float s1,s2;
    public:
    void get_marks(float x,float y)
    {
        s1=x;
        s2=y;
    }
    void put_marks(void)
    {
        cout<<" marks obtained : s1= "<<s1<<"s2= "<<s2;
    }
};
class sports
{
    public:
    int score;
    void get_score(int x)
    {
        score=x;
    }  
    void put_score(void)
    {
        cout<<" sports marks: "<<score;
    }
};
class result: public test, public sports
{
    float tot;
    public:
    void display(void)
    {
        tot=s1+s2+score;
        put_no();
        put_marks();
        put_score();

        cout<<" total score= "<<tot;
    }
};
int main()
{
    result st1;
    st1.get_no(101);
    st1.get_marks(39,65);
    st1.get_score(29);
    st1.display();
}