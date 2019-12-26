#include<stdio.h>

void merge(int *a,int *b,int *c,int m,int n)
{
    int i=0;
    int j=0;
    int k=0;

    while(i<m && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    for(;i<m;i++)
        c[k++]=a[i++];
    for(;j<n;j++)
        c[k++]=b[j++];
}


int main()
{
    int A[]={20,30,40,50};
    int B[]={2,2,22,33};
    int C[10];
    int i;
    int m=4;
    int n=3;
    merge(A,B,C,m,n);
    for(i=0;i<10;i++)
        printf("%d ",C[i]);


    return 0;
}
