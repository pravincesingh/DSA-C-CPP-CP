#include<iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int noelement;
    cin>>noelement;
    int arr[noelement];
    for(int i=0 ; i<noelement ; i++)
            cin>>arr[i];

    for(int i=noelement-1 ; i>=0 ; i--)
            cout<<arr[i]<<" ";
    return 0;
}
