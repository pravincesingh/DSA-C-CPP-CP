#include<iostream>
using namespace std;

int main ()
{
  //  int *p;
    //p=new int[6];
    int *p=new int[6];
    p[4]=4;
    for(int i=0;i<6; i++)
        cout<<p[i]<<endl;
}
