#include<iostream>
using namespace std;

class base
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funbase()
    {
        a=10;
        b=20;
        c=30;
    }

};
class derived:base
{
public:
    funderives()
    {
        c=2;
    }
};
int main()
{
    base x;
    //x.b=3;
    x.c=12;
    cout<<x.c<<endl;
    return 0;

}








