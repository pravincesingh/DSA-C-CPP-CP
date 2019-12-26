#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int T;cin>>T;
    while(T--)
    {
        vector<int> r1;
        for(int i=0;i<4;i++)
        {
            int n;cin>>n;
            r1.push_back(n);
        }
        sort(r1.begin(),r1.end());
        if(r1[0]==r1[1]&&r1[2]==r1[3])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }



    return 0;
}
