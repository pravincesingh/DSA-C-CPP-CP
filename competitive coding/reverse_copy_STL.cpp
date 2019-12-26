#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    vector<char> a(5);
    for(int i=0;i<5;i++)
        cin>>a[i];

    vector<char> b(5);
    reverse_copy(a.begin(),a.end(),b.begin());

    for(int i=0;i<5;i++)
        cout<<b[i];
        cout<<"\n\n";

}
