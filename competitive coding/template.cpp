#include<iostream>
using namespace std;

//Data structures can be called as a container
/*
CONTAINER ->Anything that contains data
1)SEQUENTIAL
2)ASSOCIATIVE
3)ADAPTERS

1)SEQUESTIAL->Stored data in a particular sequence
            ->Position matters
            eg., Vector ,list , forward_list

2)ASSOCIATIVE->Data is somehow associated with itself
             ->Position does NOT matters
             eq., map , multimap , set, multiset, unordered_map , unordered_set

3)ADAPTERS->Sit on already existing containers and restrict their functionalities
          -> Are pure concepts
          eq., stack , queue, priority_queue




*/



template <class T>
void print(T a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    //int arr[]={2,3,4,5};
    //char arr[]="abcd";
    float arr[]={2.4,5.66,8.66,4.6666};
    print(arr,4);

    return 0;
}
