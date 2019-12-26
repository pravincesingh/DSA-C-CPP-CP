#include<iostream>
#include<stdio.h>
using namespace std;
#define MAX_SIZE 100

class stack
{
private:
    int a[MAX_SIZE];
    int top;
public:
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==MAX_SIZE-1)
        {
            printf("Error: stack overflow\n");
        }
        a[++top=x];
    }
    void pop()
    {
        if(top==-1)
        {
            printf("Error : no element to pop\n");
            return;
        }
        top--;
    }
    int tope()
    {
        return a[top];
    }
    int IsEmpty()
    {
        if(top==-1)
            return 1;
        return 0;
    }
    void print()
    {
        int i;
        printf("Stack: ");
        for(i=0;i<=top;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
};

int main()
{
    stack s;
    s.push(2);
    s.print();
}
