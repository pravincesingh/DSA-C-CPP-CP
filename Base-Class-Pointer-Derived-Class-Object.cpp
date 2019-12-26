#include<iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"Fun of Base"<<endl;
    }
};
class Derived : public Base
{
public:
    void fun2()
    {
        cout<<"Fun of Derived"<<endl;
    }
};

int main()
{
    Derived d;
    Base *ptr=&d;
    ptr->fun1();
//    ptr->fun2();
    return 0;
}





