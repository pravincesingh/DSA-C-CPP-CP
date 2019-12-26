#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello";
}
int main()
{
    void (*fp)();// Decleration
     fp=display;//initialisation
    (*fp)();//calling
}
