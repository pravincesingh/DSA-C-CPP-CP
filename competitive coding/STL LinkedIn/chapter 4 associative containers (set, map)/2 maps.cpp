// KEY VALUE PAIR
#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    //map<int, string> this_map;
    multimap<int, string> this_map; //accept duplicates
    int temp;
    string str;
    pair<int , string> p;

    cout<<"Inserting...\n";
    while(temp>=0)
    {
        cout<<"Enter key: ";
        getline(cin,str);
        temp=stoi(str);
        if(temp>=0)
        {
            p.first=temp;
            cout<<"Enter name: ";
            getline(cin,str);
            p.second=str;
            this_map.insert(p);
        }
    }

    for(auto it =this_map.begin(); it!=this_map.end();it++)
        cout<<it->first <<"->"<<it->second<<" "<<endl;





    temp=0;
    cout<<"Removing...\n";
    while(temp>=0)
    {
        cout<<"Enter key: ";
        getline(cin,str);
        temp=stoi(str);
        if(temp>=0)
            this_map.erase(temp);
    }
    for(auto it =this_map.begin(); it!=this_map.end();it++)
        cout<<it->first <<"->"<<it->second<<" "<<endl;

    return 0;
}
