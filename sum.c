#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    int i;
    int j=1;
    int sum=0;
    printf("Enter no of term to be added :");
    scanf("%d",&n);

    for(i=1 ;i<=n ; i++ )
    {
        sum=sum+pow(i,j);
        j++;
    }
    printf("The sum is : %d\n",sum);
}
