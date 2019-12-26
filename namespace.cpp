#include<iostream>
using namespace std;

namespace first
{
    void dis()
    {
        cout<<"First";
    }
}
namespace second
{
    void dis()
    {
        cout<<"Second";
    }
}
using namespace second;
int main()
{
    //first::dis();
    dis();
}
