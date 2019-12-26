#include<iostream>
using namespace std;

int main()
{
    int T;cin>>T;

    while(T--)
    {
        int siz,k;cin>>siz>>k;
        string s;cin>>s;
        int cap=0;int small=0;
        for(int i=0;i<siz;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                small++;
            else
                cap++;
        }

        if(small==cap)
        {
            if(k>=small)
                cout<<"both"<<endl;
            else if(k<cap)
                cout<<"none"<<endl;
        }
        else if(small> cap)
        {
            if(k>=small)
                cout<<"both"<<endl;
            else if(k<small && k>=cap)
                cout<<"chef"<<endl;
            else if(k<cap)
                cout<<"none"<<endl;
        }
        else if(small<cap)
        {
            if(k>=cap)
                cout<<"both"<<endl;
            else if(k<cap && k>=small)
                cout<<"brother"<<endl;
            else if(k<small)
                cout<<"none"<<endl;

        }



    }

    return 0;
}
