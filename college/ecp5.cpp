#include<iostream>
using namespace std;

class addi
{
public:
    int x,y,z;
    float p,q;
    int add(int x,int y);
    int add(int x,int y,int z);
    float add(float p,float q);
};

int main()
{
    addi a;
    cout<<a.add(2,4)<<endl;
    cout<<a.add(2,4,8)<<endl;
    cout<<a.add(2.2f,4.5f);
    return 0;
}
int addi::add(int x,int y)
{
    return (x+y);
}
int addi::add(int x,int y,int z)
{
    return (x+y+z);
}
float addi::add(float x,float y)
{
    return (x+y);
}
