


#include<stdio.h>
#include<conio.h>
void tower(int N,char T1,char T2,char T3)
{
   if(N==1)
   {
   	printf("%c to %c\n",T1,T3);
   	return;
   } 	
   tower(N-1,T1,T3,T2);
   	printf("%c to %c\n",T1,T3);
   tower(N-1,T2,T1,T3);	
}
void main()
{
	int n;
	printf("Enter no. of disks\n");
	scanf("%d",&n);
	tower(n,'A','B','C');
    getch();
}



