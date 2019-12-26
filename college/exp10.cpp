#include<iostream>
using namespace std;
class ABC;//Forward declaration
class XYZ
{
    int data;
public:
    void setvalue(int value)
    {
        data=value;
    }
   friend void add(ABC,XYZ);
};
class ABC
{
    int data;
public:
    void setvalue(int value)
    {
        data=value;
    }
    friend void add(ABC,XYZ);
};
void add(ABC ob1,XYZ ob2)
{
    cout<<"The addition is "<<ob1.data+ob2.data;
}
int main()
{
    XYZ x;
    ABC a;
    x.setvalue(5);
    a.setvalue(32);
   add(a,x);
    return 0;
}
