// push and pop in only one end

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> numbers;
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
