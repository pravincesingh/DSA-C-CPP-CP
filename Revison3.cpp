#include<iostream>
#include<conio.h>
using namespace std;
int greatest(int *a,int *b,int *c)
{
    int g=(*a>*b&&*a>*c?*a:(*b>*c)?*b:*c);
    return g;
}
int main()
{
    int x,y,z;
    cout<<"Enter 3 numbers"<<endl;
    cin>>x>>y>>z;
    int gr=greatest(&x,&y,&z);
    cout<<"The greatest number in "<<x <<","<<y<<","<<z<<" is "<<gr;
    return 0;
    getche();
}
