#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="Pravince";
    string s1(s);
    string s2(s,2,4);
    string s3=s.substr(2,4);
    cout<<s<<" "<<s1<<" "<<s2<<" "<<s3<<endl;

    if(s.compare(s2)==0)
        cout<<s <<" is equal to "<<s2;
    else
        cout<<s <<" is not equal to "<<s2;
}
