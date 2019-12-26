#include<iostream>
#include<list>
using namespace std;
//List do not support random access so we cannot implement 3rd and 4th function of vectors
void print(const list<int>& my_list){
    cout<<"List content: { ";
    for(const int& num : my_list)
        cout<<num<<" ";
    cout<<"}\n\n";
}

int main()
{
    list<int> numbers;
    int value=0;

    cout<<"Pushing back...\n";
    while(value>=0){
        cout<<"Enter number: ";
        cin>>value;
        if(value>=0)
            numbers.push_back(value);
    }
    print(numbers);


    value=0;
    cout<<"Pushing front...\n";
    while(value>=0){
        cout<<"Enter number: ";
        cin>>value;
        if(value>=0)
            //numbers.insert(numbers.begin(),value);
            numbers.push_front(value);
    }
    print(numbers);


}

