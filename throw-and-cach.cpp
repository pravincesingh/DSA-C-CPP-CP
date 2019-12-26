#include<iostream>
using namespace std;

int division(int a,int b)
{
    if(b==0)
        throw 1;
    return a/b;
}

int main()
{
    int x=10,y=0,z;
    try
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int x)
    {
        cout<<"Division by zero "<<x<<endl;
    }
    cout<<"Bye"<<endl;
}
