#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Constructor of base"<<endl;
    }
    ~Base()
    {
        cout<<"Destuctor of base"<<endl;
    }

};

class Derived: public Base
{
    public:
    Derived()
    {
        cout<<"Constructor of derived"<<endl;
    }
    ~Derived()
    {
        cout<<"Destructor of derived"<<endl;
    }
};

void fun()
{
    Derived d;
}

int main()
{
    fun();
}












