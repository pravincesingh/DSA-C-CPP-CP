#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
    int a,b;
public:
    void setvalue()
    {
        a=25;
        b=22;
    }
    friend float mean (sample z);
};

float mean(sample z)
{
    return float(z.a+z.b)/2.0;
}

int main()
{
    sample x;
    x.setvalue();
    cout<<"Mean value="<<mean(x)<<endl;
    return 0;
}
