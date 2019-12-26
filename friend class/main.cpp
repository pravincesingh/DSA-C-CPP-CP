#include <iostream>

using namespace std;
class your;
class my
{
private:
    int a;
protected:
    int b;
public:
    int c;
friend your;
};

class your
{
   public:
       void fun()
       {
           my m;
           m.a=30;
           m.b=32;
           cout<<m.a<<endl<<m.b;
       }
};


int main()
{
    your y;
    y.fun();
}
