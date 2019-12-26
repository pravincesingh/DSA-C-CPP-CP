#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        vector<int> v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[1]<<"\n";
    }


return 0;
}
