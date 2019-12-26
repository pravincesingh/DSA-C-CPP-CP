#include<iostream>
using namespace std;

class Parent{
public:
    void display()
    {
        cout<<"Display of parent"<<endl;
    }
};

class child:public Parent
{
public:
    void display()
    {
        cout<<"Display of child"<<endl;
    }
};

int main()
{
    child p;
    p.display();
}


