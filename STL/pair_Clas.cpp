#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int,char> p;
    p=make_pair(2,'b');
    pair<int,char> p2(1,'a');
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p.first<<" "<<p.second;
}
