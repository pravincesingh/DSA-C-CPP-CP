#include<iostream>
using namespace std;
class counter{
    int count;
public:
    counter()
    {
        count=0;
    }
    counter operator ++(int)
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
    counter operator --(int)
    {
        count--;
    }};
int main()
{
    counter c1;
    cout<<"The initial value of c is:"<<c1.getcount()<<endl;
    c1++;
    c1++;
    c1++;
    cout<<"The present state of c is :"<<c1.getcount()<<endl;
    c1--;
    c1--;
    cout<<"The Final state of c is :"<<c1.getcount()<<endl;
    return 0;
}
