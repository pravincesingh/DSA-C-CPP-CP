#include<iostream>
#include<algorithm>
using namespace std;

//Unary predicate
bool is_To_Be_Removed(int n)
{
    if(n<=20)
        return true;
    else
        return false;
}

int main()
{
    int  n,arr[5];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    remove_if(arr,arr+n,is_To_Be_Removed);


    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
