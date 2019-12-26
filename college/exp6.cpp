#include<iostream>
#include<string>
using namespace std;

class man
{
    int acc;
    string name;
public:
    man()//Default constructor
    {
        acc=1000;
        name='ABC';
    }
    man(int x,char y)//Parametrised constructor
    {
        acc=x;
        name=y;
    }
    man(man &y)
    {
        acc=y.acc;
        name=y.name;
    }

    void show()
    {
        cout<<"The details of Man is :"<<endl;
        cout<<"Account no : "<<acc<<endl<<"Name ="<<name<<endl;
    }
};




int main()
{
    man m;
    man n(2001,'f');
    man p(n);
    cout<<"This is default constructor"<<endl;
    m.show();
    cout<<"This is a parametrised constructor"<<endl;
    n.show();
    cout<<"This is a copy constructor"<<endl;
    p.show();
    return 0;
}
