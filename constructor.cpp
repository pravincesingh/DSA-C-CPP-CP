#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    //Default constructor
    Rectangle()
    {
        length=1;
        breadth=1;
    }
    //Parametrised constructor
    Rectangle(int l,int b)
    {
        setLength(l);
        setBreadth(b);
    }
    //Copy constructor
    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l)
    {
        if(l>0)
            length=l;
        else
            length=1;
    }
     void setBreadth(int b)
    {
        if(b>0)
            breadth=b;
        else
            breadth=1;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{

Rectangle r1;
cout<<r1.area()<<endl;
//Rectangle object by passing length and breadth
Rectangle r2(10,5);
cout<<r2.area()<<endl;
Rectangle r3(r2);
cout<<r3.area()<<endl;
}
