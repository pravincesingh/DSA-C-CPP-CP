#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {

          if((j<=i || j>=6-i)&&i<=3 || (j!=3&&i>3))
                    printf("*");
            else
                    printf(" ");
           }
     printf("\n");
   }
    return 0;
}
