#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Constructor of base"<<endl;
    }
   virtual ~Base()
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
    Base *p;
    p=new Derived();
    delete p;

}

int main()
{
    fun();
}













