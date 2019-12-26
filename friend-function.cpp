#include<iostream>
using namespace std;

class my
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun();
};

void fun()
{
    my m;
    m.a=10;
    m.b=32;
    m.c=31;
cout<<m.a<<endl;
cout<<m.b<<endl;
cout<<m.c<<endl;
}
int main()
{
  fun();
}
