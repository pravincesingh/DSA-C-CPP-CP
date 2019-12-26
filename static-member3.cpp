#include<iostream>
using namespace std;

class Innova
{
public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int Innova::price=20;
int main()
{
    cout<<Innova::price<<endl;
    Innova i1,i2;
    cout<<i1.price<<endl;
    cout<<i2.price<<endl;
}
