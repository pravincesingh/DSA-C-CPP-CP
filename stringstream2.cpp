#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string number="32";
    int num;
    stringstream da;
    da<<number;
    da>>num;
    cout<<num<<endl;
}
