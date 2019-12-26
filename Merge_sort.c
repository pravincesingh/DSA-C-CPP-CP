#include<stdio.h>
#include<conio.h>

int n,i,j,k;

void display(int a[20],int n)
{
for(i=0;i<n;i++)
{
    printf("\t%d",a[i]);
}
printf("\n");
}

void merge(int l[20],int r[20],int a[20],int lc,int rc)
{
    i=0;
    j=0;
    k=0;
    while(j<lc && k<rc)
    {
        if(l[j]<r[k])
        {
            a[i]=l[j];
            i++;
            j++;
        }
        else
        {
            a[i]=r[k];
            i++;
            k++;
        }
    }

    while(j<lc)
    {
        a[i]=l[j];
        j++;
        i++;
    }

    while(k<rc)
    {
        a[i]=r[k];
        i++;
        k++;
    }
}

void merge_sort(int a[20],int n)
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
int a[20],mid;
printf("\nEnter the number of elements:\n");
scanf("%d",&n);
printf("Enter the elements :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
merge_sort(a,n);
printf("\nSorted array:\n");
display(a,n);
}
