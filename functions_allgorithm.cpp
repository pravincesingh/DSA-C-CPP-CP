#include<iostream>
using namespace std;
#include<algorithm>


/*int main()
{
    int arr[]={4,2,7,9,6,32,6,1,0,8};
    //sorting in ascending      sort(arr+4,arr+10);
    //sorting in descending     sort(arr,arr+10,greater<int>());

    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
}*/

//Sorting in interval

struct Interval
{
    int st;
    int et;
};

bool compare(Interval i1,Interval i2)
{
    return i1.st < i2.st;
}

int main()
{
    Interval arr[]={{3,4},{2,7},{4,5},{9,13},{5,7}};
    sort(arr,arr+5,compare);

    for(int i=0;i<5;i++)
        cout<<arr[i].st<<" : "<<arr[i].et<<endl;
    return 0;
}
