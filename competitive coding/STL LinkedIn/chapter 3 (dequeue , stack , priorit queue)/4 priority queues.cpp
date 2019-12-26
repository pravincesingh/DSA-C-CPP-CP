/*
It keeps the element in order naturally
as it is implemented as a heap which is a datastructure which have behaviour of binary tree which keeps its element order

push in any order
pop will only in descending order

*/


// push and pop in only one end

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> numbers;
    int temp;

    cout<<"Pushing...\n";
    while(temp>=0)
    {
        cout<<"Enter numbers: ";
        cin>>temp;
        if(temp>=0)
            numbers.push(temp);
    }


    cout<<"Poping...\n";
    while(numbers.size()>0)
    {
        cout<<numbers.top()<<" ";
        numbers.pop();
    }
    return 0;
}

