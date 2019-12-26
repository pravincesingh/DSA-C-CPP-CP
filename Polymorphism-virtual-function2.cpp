#include<iostream>
using namespace std;

class BasicCar
{
public:
   virtual void start()
    {
        cout<<"Basic car started";
    }
};
class AdvanceCar:public BasicCar
{
public:
    void start()
    {
        cout<<"AdvanceCar started"<<endl;
    }

};
int main()
{
    BasicCar *p=new AdvanceCar();
    p->start();
}

