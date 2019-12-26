#include<iostream>
using namespace std;
class company
{
    int salary;
    int nop;
public:
    friend void print(company );
    company()
    {
        salary=0;
        nop=0
    }

    company operator +(company);
    company operator -(company);

    void setdata(int s,int m)
    {
        salary=s;
        nop=m;
    }
};

void print(company sum)
{
    cout<<"Total salary is"<<sum.salary<<endl;
    cout<<"Total no. of parts is"<<sum.nop<<endl;
}
