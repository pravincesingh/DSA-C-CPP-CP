#include<stdio.h>
int n=0;
void merge_sort(int *p)
{
   int gap,i,j,k,n=0;
   int temp[10];
   int LB1,LB2,UB1,UB2;
   for(gap=1;gap<=n-1;gap=gap*2)
   {
   	   LB1=0,k=0;
   	   while(LB1+gap<n)
   	   {
   	   	 LB2=LB1+gap;
   	   	 UB1=LB2-1;
   	   	 if(UB1+gap<n)
   	   	   UB2=UB1+gap;
   	   	 else
   	   	   UB2=n-1;
   	   	 while(LB1<=UB1 && LB2<=UB2)
   	   	 {
   	   	 	if(p[LB1]<p[LB2])
   	   	 	  temp[k++]=p[LB1++];
   	   	 	else
			  temp[k++]=p[LB2++];
   	   	 }
   	   	 while(LB1<=UB1)
   	   	 {
   	   	 	temp[k++]=p[LB1++];
   	   	 }
   	   	 while(LB2<=UB2)
   	   	 {
   	   	 	temp[k++]=p[LB2++];
   	   	 }
   	   	 LB1=UB2+1;
   	   }
   	   for(i=0;i<=UB2;i++)
   	   {
   	   	 p[i]=temp[i];
   	   }
   }

}
traverse(int *p)
{
    int i;
       printf("The sorted array is :");
       for(i=0;i<n;i++)
        printf("%d ",p[i]);
}
void main()
{
    int arr[10],i;
    printf("Enter number of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    merge_sort(arr);

    traverse(arr);

}
