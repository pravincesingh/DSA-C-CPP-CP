
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int *data=malloc(3*sizeof(int));
    data[0]=5;
    data[1]=2;
    data[2]=1;
    for(i=0;i<3;i++)
    {
        printf("%d ",data[i]);
    }
}
