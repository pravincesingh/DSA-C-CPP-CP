#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int i;
    vector<int>  A ={24,66,3,5,43};
    cout<<A[2]<<endl;

    sort(A.begin(),A.end());//O(NlogN)

    for( i=0;i<5;i++)
        cout<<A[i]<<" ";

    if(bool present= binary_search(A.begin(),A.end(),3))
    cout<<"present";










    return 0;
}
