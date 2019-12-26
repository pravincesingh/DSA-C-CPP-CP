#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int num;
    string str;
    cout<<"Enter number :";
    cin>>num;

    stringstream aa;
    aa<<num;
    aa>>str;
    cout<<"The numerical form of the number is :"<<num<<endl;
    cout<<"The character form of the number is :"<<str;
    return 0;
}
