#include<iostream>
using namespace std;

class parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funParent()
    {
        a=12;
        b=33;
        c=123;
    }
};
class child:public parent
{
 public:
     void funChild()
     {
      //  a=33;
         b=53;
         c=2;
     }
};
class grandChild:public child
{
public:
    void funGrandChild()
    {
       // a=21;
        b=5;
        c=32;
    }
};
int main()
{
    child c;
    //c.a=21;
   // c.b=232;
    c.c=35;

}







