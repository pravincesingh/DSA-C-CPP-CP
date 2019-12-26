#include<stdio.h>
void main()
{
    int ARR[100];
    int i,num;
    int first_pos=0;
    int max=100;
    int last_pos=max;
    int count=0;
    int flag=0;
    for(i=0;i<=max;i++)
        ARR[i]=i;
    printf("Enter the element you want to search :");
    scanf("%d",&num);
    while(first_pos<=last_pos&& flag==0)
    {   count++;
        int mid=(first_pos+last_pos)/2;

        if(num==ARR[mid])
        {   flag=1;
            printf("Element found\n");
             printf("The no of steps are :%d\n",count);
            break;
        }
        else if(num<ARR[mid])
        {
            last_pos=mid-1;
        }
        else if(num>ARR[mid])
        {
            first_pos=mid+1;
        }
           printf("The no is not present\n");

    }
   printf("The no is not present\n");
printf("The no of steps are :%\n",count);
}
