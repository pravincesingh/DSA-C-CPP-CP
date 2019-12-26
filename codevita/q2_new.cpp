#include<iostream>
#include<string>
using namespace std;

int count(string s , char c ,int pos)
{
    int res=0;
    for(int i=0;i<pos;i++)
    {
        if(s[i]==c)
            res++;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    char str[n];
    cin >> str;
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++)
    {
    int pos;
    cin>>pos;
    pos=pos-1;
    char c=str[pos];
    cout<<count(str,c,pos)<<endl;
    }
    return 0;
}

