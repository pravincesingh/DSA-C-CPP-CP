#include<iostream>
using namespace std;

void fun(const int &x,int &y)
{
   // x++;
    y++;
    cout<<x<<" "<<y;
}
int main()
{
    int a=10,b=20;
    fun(a,b);
}
