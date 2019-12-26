#include<stdio.h>
void main()
{
    int r,c,i,j;
    int count_0=0;
    int count_n=0;
    printf("Enter the number of row :");
    scanf("%d",&r);
     printf("Enter the number of column :");
    scanf("%d",&c);
    int ARR1[10][10];
printf("Enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&ARR1[i][j]);
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            if(ARR1[i][j]==0)
                count_0++;
            else
                count_n++;
    }

    if(count_0>=count_n)
        printf("Sparse matrix\n");
    else
        printf("Dense matrix\n");

printf("After transposing the first array we get \n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
          printf("%d    ",ARR1[j][i]);
          printf("\n");
    }

int ARR2[10][10];
 for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            ARR2[i][j]=0;
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            if(ARR1[i][j]!=0)
                ARR2[j][i]=ARR1[i][j];

    }
printf("After transposing the non zero elements of first array we get \n");
  for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            if(ARR2[i][j]!=0)
            printf("Position %d * %d Element %d   \n",i,j,ARR2[i][j]);

}


}
