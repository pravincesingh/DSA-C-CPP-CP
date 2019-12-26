#include<iostream>
using namespace std;

class car
{
public:
    virtual void start()=0;
};

class inova : public car
{
    public:
   void start()
    {
        cout<<"Inova started"<<endl;
    }
};
class suzuki : public car
{
    public:
    void start()
    {
        cout<<"suzuki started"<<endl;
    }
};

int main()
{
    car *p=new inova;
    p->start();
p=new suzuki;
p->start();
}
