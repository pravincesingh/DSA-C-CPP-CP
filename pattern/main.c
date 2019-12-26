#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;i<=9;j++){
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
    }

 printf("\n");
 return 0;

}
