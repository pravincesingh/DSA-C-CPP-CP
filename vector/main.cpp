#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5);
    vector<int>::iterator it;
    for(int i=0;i<v.size();i++)
        v[i]=i+1;


    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";

    return 0;
}
