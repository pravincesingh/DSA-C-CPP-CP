#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1(5);
    for(int i=0;i<v1.size();i++)
        cin>>v1[i];


    next_permutation(v1.begin(),v1.end());

    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";

    return 0;
}
