#include<bits/stdc++.h>
using namespace std;

int main()
{
    typedef pair<int , int> li; // pair<int , int> is renamed as li

    map<li , string> table;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        li code;
        string name;
        cin >>code.first>>code.second;
        cin >>name;
        table[code]=name;// code name pair recorded
    }


    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        li code;
        cin >>code.first>>code.second;
        cout<<table[code]<<endl;
    }



}
