#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *v;
    v=&a;
    cout<<a<<endl;
    cout<<*v<<endl;
    cout<<&a<<endl;
    cout<<v<<endl;
    cout<<&v<<endl;
}
