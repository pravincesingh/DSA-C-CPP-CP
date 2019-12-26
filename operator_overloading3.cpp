#include<iostream>
using namespace std;
class integer
{
private:
    int x;
public:
    void setData (int a)
    {
        x=a;
    }
    void showData()
    {
        cout<<"x="<<x<<endl;
    }
    //Preincrement
    integer operator++()
    {
        integer i;
        i.x=++x;
        return i;
    }
};

int main()
{
    integer i1,i2;
    i1.setData(10);
    i1.showData();
    i2=++i1;// i2=i1.operator++()
    i1.showDa   ta();
     i2.showData();
}
