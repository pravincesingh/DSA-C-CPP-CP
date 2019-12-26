#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
        void setData(int x,int y)
        {
            real=x;
            img=y;
        }
        void showData()
        {
            cout<<real<<" +i"<<img;
        }
        complex operator-()
        {
            complex temp;
            temp.real=-real;
            temp.img=-img;
            return temp;
        }

};
int main()
{
    complex c1,c2;
    c1.setData(3,5);
    //c2=c1.operator-();
    c2=-c1;
    c2.showData();
}
