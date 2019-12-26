#include <stdio.h>

void main()
{
    int num,n1,n2,n3,nu;
    printf("Enter a 4 digit number :");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
num=num+n1+n2+n3;
printf("The sum of %d\n",num);


}
