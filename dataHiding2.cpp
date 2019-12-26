#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    void setLength(int l)
    {
        if (l<0)
            length=1;
        else
        length=l;
    }
    void setBreadth(int b)
    {
        if (b<0)
            breadth=1;
            else
        breadth=b;
    }
    int getLength()
    {
       return length;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
  Rectangle r1;
  r1.setLength(-10);
  r1.setBreadth(5);
  int l=r1.getLength();
  int p=r1.perimeter();
  cout<<p<<endl;
cout<<l<<endl;
    return 0;
}
