#include<iostream>
using namespace std;

int main()
{

    string s1;cin>>s1;
    int arr[26]={0};
    for(int i=0;i<s1.size();i++)
    {
        if(arr[s1[i]-97]==0)
        arr[s1[i]-97]=1;
    }
    /*for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
}*/

    int T;cin >>T;
    while(T--)
    {
        string s2;cin >>s2;
        int temp=0;
        for(int i=0;i<s2.size();i++)
        {
            if(arr[s2[i]-97]!=1)
            {
                temp=1;
                //cout<<" *"<<s2[i]<<" " <<arr[s2[i]-97]<<endl;
            }
        }
        if(temp==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }

    return 0;
}
