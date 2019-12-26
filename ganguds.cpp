#include<iostream>
#include<conio.h>
using namespace std;
class overload
{public:
    int a,b,c;
    float d;

int add(int a,int b);
int add(int a,int b,int c);
float add(int a,int b,float d);
};

int overload::add(int a,int b)
{
    return(a+b);

}
int overload::add(int a,int b,int c)
{
    return(a+b+c);
}
float overload::add(int a,int b,float d)
{
    return(a+b+d);
}
int main()
{

    overload ob;
    cout<<ob.add(3,5)<<endl;
    cout<<ob.add(3,5,9)<<endl;
    cout<<ob.add(4,5,4.8f);
}


