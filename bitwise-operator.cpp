#include<iostream>
using namespace std;

int main()
{
    int a=11,b=5,c,d,e,f;
    c=a&b;
    cout<<"And value is "<<c<<endl;
    d=a|b;
    cout<<"Or value is "<<d<<endl;
    e=~a;
    cout<<"Not value of 11 is "<<e<<endl;
    f=a^b;
    cout<<"Xor value is "<<f<<endl;


    char g=5,h;
    h=g<<1;
    cout<<"Left shift of 5 is "<< (int)h<<endl;

    char i=20,j;
    j=i>>1;
    cout<<"Right shift of 20 is "<< (int)h<<endl;
}
