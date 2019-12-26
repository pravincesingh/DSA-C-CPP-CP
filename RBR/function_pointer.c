#include<stdio.h>

void swap(int *p,int *q);

int main()
{
    int a=100,b=200;
    swap(&a,&b);
    printf("The value of a is %d \nThe value of b is %d",a,b);
}

void swap(int *p,int *q)
{
    int temp;
    temp=*q;
    *q=*p;
    *p=temp;
}
