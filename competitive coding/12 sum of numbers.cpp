#include<iostream>
#include<sstream>
using namespace std;

// 0-32 Teletype
// 48-57 Numbers
//65-90 Alphabet capital
// 97-122 Alphabet small

int main()
{
    int T;
    cin>>T;
    int n;

    while(T--)
    {
        long long int sum=0;
        cin >>n;
        ostringstream str1;
        str1<<n;
        string s=str1.str();

        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            int n=int(c);
            int p=n-48;
            sum=sum+p;
        }
        cout<<sum;
    }


    return 0;
}
