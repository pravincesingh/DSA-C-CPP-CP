#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i,j;
   char k;

   for(i=1;i<=5;i++)
   {
       k='A';
       for(j=1;j<=5;j++)
       {
           if(j>=i&&j<=5)
           {
               printf("%c",k);
               k++;
           }
           else
            printf(" ");
       }
       printf("\n");
   }

}
