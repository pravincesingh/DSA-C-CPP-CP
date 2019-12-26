#include<iostream>
using namespace std;

int main()
{
    const int x=10;
  const int *ptr=&x;
  int y=12;
  ptr=&y;
   //++(*ptr);
    cout<<*ptr<<endl;
}
