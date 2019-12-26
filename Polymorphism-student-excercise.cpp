#include<iostream>
using namespace std;


class Shape
{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class Rectangle : public Shape
{
private:
    float length;
    float breadth;
public:
    Rectangle(int l=1, int b=1)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};

class Circle:public Shape
{
private:
    float radius;
public:
    Circle(float r)
    {
        radius=r;
    }
    float area()
    {
        return 3.141*radius*radius;
    }
};

int main()
{
    Shape *s=new Rectangle(3,5);
    cout<<"Area of Rectangle "<<s->area()<<endl;
       cout<<"Perimeter of Rectangle "<<s->perimeter()<<endl;

    s=new Rectangle(3,5);
    cout<<"Area of Rectangle "<<s->area()<<endl;
       cout<<"Perimeter of Rectangle "<<s->perimeter()<<endl;

}







