#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin >>n;
    int a[n];
    memset(a,-1,sizeof(a)); //value can be 0 or 1
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
