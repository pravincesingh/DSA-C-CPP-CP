#include<iostream>
using namespace std;

int main()
{
    int x=10;
   const int* const ptr=&x;
    int y=20;
//    ptr=&y;
//    ++(*ptr);
    cout<<x;
    return 0;
}
