#include<stdio.h>
#include<conio.h>
#define size 5
struct QUEUE
{
int q[size];
int front,rear;	
}LQ;    //global object created here

void insert_LQ();
void delete_LQ();
void print_LQ();

void main()
{
   int choice;
   LQ.front=LQ.rear=-1;//  empty queue created here
   do
   {
   printf("Press 1 for INSERT OPERATION\n");
   printf("Press 2 for DELETE OPERATION\n");
   printf("Press 3 for PRINT QUEUE\n");
   printf("Press 4 for EXIT\n");
   printf("ENTER YOUR CHOICE\n");
   scanf("%d",&choice);
  	 switch(choice)
   	 {
   	 	case 1:
            insert_LQ(); 
   	 		break;
   	 	case 2:
   	 		delete_LQ();
			break;
   	 	case 3:
			print_LQ();   	 		
   	 		break;	
   	 }
   } while(choice>=1 && choice<=3);
   printf("Exiting from program");
   getch();	
}
void insert_LQ()
{
   int item;
   if(LQ.rear==size-1)	
   {
   	  printf("Overflow Queue is full\n");
   	  getch();
   	  system("cls");
   	  return;
   } 
   if(LQ.front==-1)
   {
   	LQ.front=LQ.rear=0;
   }
   else
   {
   	LQ.rear++;
   }
   printf("Enter the item to be inserted in queue\n");
   scanf("%d",&item);
   LQ.q[LQ.rear]=item;
   printf("Element inserted sucessfully\n");
   getch();
   system("cls");	
}
void delete_LQ()
{
	int item;
   if(LQ.front==-1)	
   {
   	  printf("Underflow Queue is empty\n");
   	  getch();
   	  system("cls");
   	  return;
   } 
   item=LQ.q[LQ.front];
   if(LQ.front==LQ.rear)
   {
   	LQ.front=LQ.rear=-1;
   }
   else
   {
   	LQ.front++;
   }
   printf("Element %d deleted sucessfully\n",item);
   getch();
   system("cls");
}
void print_LQ()
{
   int i;
   if(LQ.front==-1)
   {
   	printf("Queue is empty\n");
   	getch();
    system("cls");
    return;
   }	
   printf("Elements waiting in queue for processing\n");
   for(i=LQ.front;i<=LQ.rear;i++)
   {
   	printf("%d\t",LQ.q[i]);
   }	
   getch();
   system("cls");
}
