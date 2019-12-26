#include<iostream>
using namespace std;

int pointer(int* p)
{
    return *p;
}
int main()
{
int num;
cout<<"Enter a number to display :";
cin>>num;
int y=pointer(&num);
cout<<y;
}
