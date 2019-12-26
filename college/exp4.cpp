#include<iostream>
using namespace std;

class addition
{
public:
    int a,b;
    int sum(int a,int b)
    {
        return a+b;
    }
};
int main()
{
    addition ob;
    cout<<"Enter first number :";
    cin>>ob.a;
    cout<<"Enter second number :";
    cin>>ob.b;
    int out=ob.sum(ob.a,ob.b);
    cout<<"The sum of both number is "<<out;
    return 0;
}
