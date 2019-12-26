#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int n=1234;
    //declaration output string
    ostringstream str1;

    //sending integer as a stream into ostringstream
    str1<<n;

    //declaring string variable
    string s=str1.str();

    cout<<"The string is "<<s;
}
