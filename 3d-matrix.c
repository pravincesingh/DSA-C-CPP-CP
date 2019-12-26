#include<stdio.h>
void main()
{
    int i,j,k,arr[2][2][2];
    printf("Enter the elements of 4-d matrix  :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
        scanf("%d",&arr[i][j][k]);
    }
    }
    printf("The value of array in row wise is \n");
   for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
        printf("%d  ",arr[i][j][k]);
    }
    }
}
