#include<iostream>
#include<unordered_map>
using namespace std;
//Hash table
//O(1) in average case for all operation.
//Fine the number of occurance of a particular number
int main()
{
    int arr[]={4,2,2,7,6,5,9,1,5,9,9};
    unordered_map<int,int> m;

    for(int i=0;i<11;i++)
        m[arr[i]]=m[arr[i]]+1;

    /*4-1
    2-1+1
    7-1
    6-1
    5-1+1
    9-1+1+1
    1-1*/

    unordered_map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" : "<<it->second<<endl;
                //key                value
    cout<<endl;
    m.erase(2);
     for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" : "<<it->second<<endl;











}

