#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int T ; cin >>T;
    int n;

    while(T--)
    {
        cin >>n;
        ostringstream str1 ;
        str1<<n;
        string s=str1.str();
        int n1=int(s[0])-48;
        int n2=int(s[s.length()-1])-48;
        cout<<n1+n2<<"\n";
    }
    return 0;
}
