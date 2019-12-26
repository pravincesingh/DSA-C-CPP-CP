#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
        void setLength(int length)
        {
           this ->length=length;
        }
        void setBreadth(int b)
        {
            breadth=b;
        }
        int perimeter()
        {
            return 2*(length+breadth);
        }
};
int main()
{
   Rectangle r1;
   r1.setLength(20);
   r1.setBreadth(4);
   cout<<r1.perimeter();
   return 0;
}
