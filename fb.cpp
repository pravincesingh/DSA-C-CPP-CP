#include<iostream>
using namespace std;


int main()
{
    int flag(int);
    int a ;
    cout<<"Enter num =";
    cin>>a;
    flag(a);
}

int flag(int x)
{
    if(x%2==0)
        cout<<"Even";
    else
    if(x%2!=0)
        cout<<"Odd";
}
