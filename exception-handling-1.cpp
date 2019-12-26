#include<iostream>
using namespace std;

int main()
{
    int x=10,y=0,z;

    try
    {
        if(y==0)
            throw 40;
        z=x/y;
        cout<<z<<endl;
    }

    catch(int e)
    {
        cout<<"Division by zero is not possible Error:"<<e<<endl;
    }
    cout<<"Bye";
}
