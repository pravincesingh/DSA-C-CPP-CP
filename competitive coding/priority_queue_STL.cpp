#include<bits/stdc++.h>
using namespace std;


//costamize max heap to mean heap
class comparator{
    public:
    bool operator()(int a , int b)
    {   // if a has higher priority than a should appear after b
        // return the answer of should a appear before b?
        if(a<b)
            return false;
        else
            return true;
    }
};

int main()
{
    priority_queue<int> pq; // It is a max heap
    pq.push(2);
    pq.push(5);
    cout<<pq.top()<<endl;


    priority_queue<int , vector<int> , comparator> pq2; //min heap
    pq2.push(2);
    pq2.push(5);
    cout<<pq2.top()<<endl;
}












