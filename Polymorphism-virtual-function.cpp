#include<iostream>
using namespace std;

class base
{
public:
    void fun1()
    {
        cout<<"Fun of base";
    }
};

class derived :public base
{
public:
    void fun1()
    {
        cout<<"Fun of derived";
    }
};
int main()
{
   derived d;
   base *ptr=&d;
   ptr->fun1();
}
