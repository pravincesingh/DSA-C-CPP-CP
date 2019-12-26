#include<iostream>
using namespace std;
class maths{
int a;
public:
maths();
void showdata();
};
maths ::maths()
{
    cout<<"This is a constructor"<<endl;
     a=100;
}
void maths::showdata()
{
    cout<<"The value of a = "<<a;
}
int main()
{
    maths m;
    m.showdata();
}
