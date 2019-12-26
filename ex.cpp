#include<iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;
public:
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<" +i"<<img;
    }
};

int main()
{
    complex c1(3,2);
     c1.display();
     return 0;
}
