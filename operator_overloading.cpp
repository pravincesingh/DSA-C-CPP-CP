#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
        complex(int r=0,int i=0)
        {
            real=r;
            img=i;
        }
    //  complex add(complex p)
    complex operator+(complex p)
        {
            complex temp;
            temp.real=real+p.real;
            temp.img=img+p.img;
            return temp;
        }
        void display()
        {
               cout<<real<<" "<<img<<"i"<<endl;
        }
};
int main()
{
    complex c1(2,3);
    complex c2(3,7);
    complex c3;
    c3=c1+c2;
  //c3=c1.add(c2);
   c3.display();
    return 0;

}
