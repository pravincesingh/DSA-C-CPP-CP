/*wap to implement the concept of destructor in cpp*/
#include<iostream>
using namespace std;
int n=0;
class call
{
public:
    call()
    {
        cout<<"This is a constructor "<<++n<<endl;
    }
    ~call()
    {
        cout<<"This is a destructor"<<--n<<endl;
    }
};

int main()
{
    call c1,c2;
    return 0;
}
