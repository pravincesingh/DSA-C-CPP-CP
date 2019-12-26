#include<iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout<<"Car started"<<endl;
    }
};
class AdavanceCar: public BasicCar
{
public:
    void playMusic()
    {
        cout<<"Music Playing"<<endl;
    }
};


int main()
{
    AdavanceCar a;
    BasicCar *ptr=&a;
    ptr->start();
    //ptr->playMusic();
}

























