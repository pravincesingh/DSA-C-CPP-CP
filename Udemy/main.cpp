#include <iostream>

using namespace std;
void swap(int x,int y)
{
     cout<<x<<" "<<y<<endl;
    int temp=x;
    x=y;
    y=temp;
     cout<<x<<" "<<y<<endl;
}
int main()
{
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
