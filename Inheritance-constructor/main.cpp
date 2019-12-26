#include <iostream>

using namespace std;
class base
{
public:
    base()
    {
        cout<<"Defaulat of base "<<endl;
    }
    base(int x)
    {
        cout<<"Param of base "<<x<<endl;
    }
};
class derived:public base
{
public:
    derived()
    {
        cout<<"Default of derived ";
    }
    derived(int a)
    {
        cout<<"Param of derived "<<a;
    }
derived(int x,int a):base(x)
    {
        cout<<"Param of derived "<<a;
    }

};

int main()
{
   derived d(3,2);

    return 0;
}
