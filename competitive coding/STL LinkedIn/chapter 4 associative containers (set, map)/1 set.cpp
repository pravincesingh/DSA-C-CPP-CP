#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main()
{
    //set<int> this_set; //dont accept duplicates
    //multiset<int> this_set; // allow duplicates
    //unordered_set<int> this_set;
    unordered_multiset<int> this_set; //hash table
    int temp;

    cout<<"Inserting...\n";
    while(temp>=0)
    {
        cout<<"Enter number: ";
        cin>>temp;
        if(temp>=0)
            this_set.insert(temp);
    }

    for(auto it = this_set.begin(); it!=this_set.end();it++)
        cout<<*it<<" ";

    temp=0;
    cout<<"Removing...\n";
    while(temp>=0)
    {
        cout<<"Enter number: ";
        cin>>temp;
        if(temp>0)
            this_set.erase(temp);
    }
    for(auto it = this_set.begin(); it!=this_set.end();it++)
        cout<<*it<<" ";
}
