#include<iostream>
#include<map>
using namespace std;
//binary search
//logn for finding,deleting,inserting
//Fine the number of occurance of a particular number
int main()
{
    int arr[]={4,2,2,7,6,5,9,1,5,9,9};
    map<int,int> m;

    for(int i=0;i<11;i++)
        m[arr[i]]=m[arr[i]]+1;

    /*4-1
    2-1+1
    7-1
    6-1
    5-1+1
    9-1+1+1
    1-1*/

    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" : "<<it->second<<endl;
                //key                value
    cout<<endl;
    m.erase(2);
     for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" : "<<it->second<<endl;











}
