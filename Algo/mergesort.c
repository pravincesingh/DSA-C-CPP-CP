#include<stdio.h>

void merge(int *a,int *b,int *c,int m,int n)
{
    int i=0;
    int j=0;
    static int k=0;

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
void mergeSort(int l ,int h, int *a,int *b,int *c)
{
    int m=4;
    int n=3;
    int mid;

    if(l<h)
    {
        mid=(l+h)/2;
        mergeSort(l,mid,a,b,c);
        mergeSort(mid+1,h,a,b,c);
        merge(a,b,c,m,n);
    }

}
int main()
{

    int l=0;
    int h=0;
    int A[]={20,30,40,50};
    int B[]={2,2,22,33};
    int C[10];
    int i;
    for(i=0;i<10;i++)
        C[i]=0;
    mergeSort(l,h,A,B,C);
    for(i=0;i<10;i++)
        printf("%d ",C[i]);
    return 0;
}
