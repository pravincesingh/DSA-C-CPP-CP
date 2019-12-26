#include<iostream>
using namespace std;
int factorial(int *x)
{
    int fact=1;
    if(*x==1)
        return 1;
    else
    {
        while(*x>1)
        {
            fact=fact*(*x);
            (*x)--;
        }
        return fact;
    }
}
int main()
{
    int num;
    cout<<"Enter number to calculate factorial :";
    cin>>num;
    int fac=factorial(&num);
    cout<<"The factorial is :"<<fac;
}
