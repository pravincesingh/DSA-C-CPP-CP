#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1(5);
    cout<<"Enter 5 numbers ";
    for(int i=0;i<5;i++)
        cin>>v1[i];

    cout<<"The element sorted in ascending order are :";
    sort(v1.begin(),v1.end());

    for(int i=0;i<5;i++)
        cout<<v1[i]<<" ";


    cout<<endl<<"The element sorted in descending order are :"<<endl;
    sort(v1.begin(),v1.end(),greater<int>());

    for(int i=0;i<5;i++)
        cout<<v1[i]<<" ";

    cout<<"The minimum element for vector is "<<*min_element(v1.begin(),v1.end());
}
