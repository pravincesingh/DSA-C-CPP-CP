#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int temp=0;
        string s;cin>>s;
        for(int i=0;i<s.size();i=i+2)
            if(s[i]==s[i+1])
                temp=1;

        if(temp==1)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }



    return 0;
}
