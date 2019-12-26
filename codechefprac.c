#include<stdio.h>

void main(void)
{
    int t,n1,n2,sum,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n1,&n2);
        printf("%d\n",n1+n2);
    }
}
