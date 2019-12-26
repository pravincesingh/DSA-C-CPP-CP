#include<iostream>
using namespace std;
class MyException
{

};
int division(int a,int b)throw(int)
{
    if(b==0)
        throw 10;
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

    catch(MyException e)
    {
        cout<<"Division by zero is not possible Error:"<<endl;
    }
    cout<<"Bye";
}

