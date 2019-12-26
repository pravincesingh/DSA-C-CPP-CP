#include<iostream>
using namespace std;
int n=0;
class call{
public:
            call()
            {
                cout<<"This is constructor "<<++n<<endl;
            }
            ~call()
            {
                cout<<"This is destructor "<<--n<<endl;

            }

        };
int main()
{
    call c1;

}
