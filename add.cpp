#include<iostream>
using namespace std;
void add(int x,int y);
int main()
{
    int a,b;
    cout<<"Enter the number :";
    cin>>a>>b;
    add(a,b);
}
void add(int x,int y)
{
    int c;
    c=x+y;
    cout<<"Sum is "<<c;
}
