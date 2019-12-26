#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(5);

   cout<<v[0]<<" "<<v[1]<<endl;

   cout<<v.size()<<endl;
    v.pop_back();
    cout<<v[0]<<" "<<v[1]<<endl;
   cout<<v.size()<<endl;
    return 0;
}
