#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<set>
void vectorDemo()
{
    vector<int> A={6,2,8,4};
    sort(A.begin(),A.end());
    for(int x:A)
        cout<<x<<" ";

    A.push_back(50);
    A.push_back(20);
    A.push_back(50);
    A.push_back(50);
    A.push_back(100);
    cout<<endl;
    for(int x:A)
        cout<<x<<" ";

    cout<<endl;
    auto it =lower_bound(A.begin(),A.end(),50);  //<=
    cout<<*it<<endl;
    auto it2=upper_bound(A.begin(),A.end(),50);  //>
    cout<<*it2<<endl;
    cout<<"The number of 50 is "<<it2-it<<endl;

}




void setDemo() // LogN time
{
    set<int> S;
    S.insert(1);
    S.insert(-1);
    S.insert(7);
    S.insert(5);
    S.insert(8);

    for(int x: S)
        cout<<x<<" ";
    cout<<endl;

    auto it=S.find(8);
   // cout<<*it<<endl;
    //cout<<*(S.end());
    if(it==S.end())
    {
        cout<<"Element not present"<<endl;
    }
    else
    {
        cout<<"Element is present "<<*it<<endl;
    }

    //Fine a number which is greater than a particular number
    auto it2=S.lower_bound(8);
   cout<<*it2<<endl;
    //Fine a number which is just greater than a particular number
    auto it3=S.upper_bound(8);
    cout<<*it3<<endl;
}
int main()
{
    //vectorDemo();
    setDemo();
    return 0;
}
