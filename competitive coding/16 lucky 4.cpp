#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        int count=0;
        int n;cin>>n;
        ostringstream str1;
        str1<<n;
        string s= str1.str();
        for(int i=0;i<s.length();i++)
            if(s[i]=='4')
                count++;

        cout<<count<<"\n";
    }


return 0;
}
