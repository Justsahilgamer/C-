#include<iostream>
using namespace std;
class ratio
{
    public:
    ratio()
    {
        cout<<"object is born";
    }
    ~ratio()
    {
        cout<<"object dies";
    }
private:
int num,den;
};
int main()
{
    ratio x;
    cout<<"now x is alive";
    cout<<"at end of program";
}
