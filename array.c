#include<stdio.h>
void main()
{
    int i,j,arr[3][3];
    printf("Enter the elements of 3*3 matrix  :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("The value and address of array in row wise is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("Value=%d , Address=%d   ",arr[i][j],&arr[i][j]);
        printf("\n");
    }
     printf("The value and address of array in column wise is \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("Value=%d , Address=%d   ",arr[j][i],&arr[j][i]);
        printf("\n");
    }
}
