#include<stdio.h>
#include<conio.h>
struct singly
{
  int info;
  struct singly * link;	
};
typedef struct singly  singly;  //now u can use only singly
void main()
{
   singly N1,N2,N3,N4,*START,*PTR;
   N1.info=10;
   N2.info=20;
   N3.info=30;
   N4.info=40;
   N1.link=&N2;
   N2.link=&N3;
   N3.link=&N4;
   N4.link=NULL;
   START=&N1;
   PTR=START;
   printf("Printing all nodes of link list\n");
   while(PTR!=NULL)
   {
   	  printf("%d ",PTR->info);
   	  PTR=PTR->link;
   }
   getch();
}







