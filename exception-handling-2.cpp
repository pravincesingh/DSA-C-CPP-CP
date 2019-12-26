#include<iostream>
using namespace std;
class MyException
{

};
int main()
{
    int x=10,y=0,z;

    try
    {
        if(y==0)
            throw MyException();
        z=x/y;
        cout<<z<<endl;
    }

    catch(MyException e)
    {
        cout<<"Division by zero is not possible Error:"<<endl;
    }
    cout<<"Bye";
}
