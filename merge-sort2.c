#include<stdio.h>

//http://scanftree.com/Data_Structure/prim's-algorithm

int merge(int a[] , int l , int r)
{
    int i=l;
    int k=l;
    int temp[100];
    int mid=(l+r)/2;
    int j=mid+1;

    while(i<=mid && j<=r)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=r)
        temp[k++]=a[j++];

    for(i=l;i<=r;i++)
        a[i]=temp[i];
}

void mergeSort(int arr[],int l,int r)
{
    int mid;

    if(l>=r)
        return ;
    mid=(l+r)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);

    merge(arr,l,r); //merge the two part

}


int main()
{
    int i,n;
    int a[100];
    printf("Enter the number of element to sort :");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    mergeSort(a,0,n-1);//array, start, end index
    printf("The sorted elements are :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);


    return 0;
}
