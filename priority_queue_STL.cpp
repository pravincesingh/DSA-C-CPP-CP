#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue <int> q;
    q.push(40);
    q.push(4);
    q.push(44);
    q.push(100);
    q.push(32);
    q.push(25);
    while(!q.empty())
    {
        cout<<q.top()<<"  ";
        q.pop();
        cout<<q.size()<<endl;
    }
    q.empty();
    while(!q.empty())
    {
        cout<<q.top()<<"  ";
        q.pop();
        cout<<q.size()<<endl;
    }
    return 0;
}
