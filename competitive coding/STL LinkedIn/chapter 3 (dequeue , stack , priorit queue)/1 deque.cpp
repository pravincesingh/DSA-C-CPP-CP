#include<iostream>
#include<deque>
// deque supports pushing and poping from both ends and also random access
using namespace std;

int main()
{
    deque<int> numbers;
    int temp=0;
    cout<<"Pushing Back...";
    while(temp>=0)
    {
        cout<<"Enter number :";
        cin>>temp;
        if(temp>=0)
            numbers.push_back(temp);
    }

    deque<int>::iterator it;
    cout<<"{ ";
    for(it = numbers.begin();it!=numbers.end(); it++)
        cout<<*it<<" ";
    cout<<"}";




    temp=0;
    cout<<endl;
    cout<<"Pushing Front...";
    while(temp>=0)
    {
        cout<<"Enter number :";
        cin>>temp;
        if(temp>=0)
            numbers.push_front(temp);
    }
    cout<<"{ ";
    for(it = numbers.begin();it!=numbers.end(); it++)
        cout<<*it<<" ";
    cout<<"}";



    return 0;
}
