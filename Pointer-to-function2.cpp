#include<iostream>
using namespace std;

int max(int a,int b,int c)
{
    return a>b && a>c ? a : (b>c )? b:c;
}
int min(int a,int b,int c)
{
    return a<b && a<c ? a : (b<c )? b:c;
}
int main()
{

    int (*fp)(int ,int ,int);
    fp=max;
    cout<<(*fp)(3,5,9)<<endl;
    fp=min;
    cout<<(*fp)(2,5,4);


}
