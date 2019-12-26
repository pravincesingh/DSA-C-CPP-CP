#include<stdio.h>


int max(int x , int y)
{
    return x>y?x:y;
}
int main()
{
    int a =100,b=200;
    int maximum = max(a,b);
    printf("%d",maximum);
}
