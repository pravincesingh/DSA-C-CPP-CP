#include<stdio.h>
int n,i,j,k;
void merge(int l[20],int r[20],int a[20],int lc,int rc)
{
    i=0;
    j=0;
    k=0;
    while(j<lc && k<rc)
    {
        if(l[j]<r[k])
        {
            a[i++]=l[j++];
        }
        else
        {
            a[i++]=r[k++];
        }
    }
    while(j<lc)
    {
        a[i++]=l[j++];
    }
    while(k<rc)
    {
        a[i++]=r[j++];
    }
}

void merge_sort(int a[],int n)
{
    int mid;
    if(n<2)
        return;
    mid=n/2;

    int l[mid],r[n-mid];

    for(i=0;i<mid;i++)
        l[i]=a[i];
    for(i=mid;i<n;i++)
        r[i-mid]=a[i];

    merge_sort(l,mid);
    merge_sort(r,n-mid);
    merge(l,r,a,mid,n-mid);
}

void main()
{
    int arr[20],n,i;
    printf("How many elements :");
    scanf("%d",&n);

    printf("Enter elements ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    merge_sort(arr,n);

    printf("Sorted elements are:");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
