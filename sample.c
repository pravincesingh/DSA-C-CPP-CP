#include<stdio.h>

main()
{
    int i=100, n=40;
    int count =0;
    while(i>=n)
    {
        i=i-1;
        n=n+1;
        count++;
    }
    printf("%d",count);
}
