#include<stdio.h>
#include<conio.h>
#define size 5
struct STACK
{
int st[size];
int top;
};
void push(struct STACK *);
void pop(struct STACK *);
void peek(struct STACK *);
void main()
{
   int choice;
   struct STACK s1;
   s1.top=-1;
   do
   {
   printf("Press 1 for PUSH OPERATION\n");
   printf("Press 2 for POP OPERATION\n");
   printf("Press 3 for PEEK OPERATION\n");
   printf("Press 4 for EXIT\n");
   printf("ENTER YOUR CHOICE\n");
   scanf("%d",&choice);
  	 switch(choice)
   	 {
   	 	case 1:
            push(&s1);
   	 		break;
   	 	case 2:
   	 		pop(&s1);
			break;
   	 	case 3:
			peek(&s1);
   	 		break;
   	 }
   } while(choice>=1 && choice<=3);
   printf("Exiting from program");
   getch();
}
void push(struct STACK *p)
{
   int item;
   if(p->top==size-1)
   {
   	  printf("Overflow ,stack is full");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the item\n");
   scanf("%d",&item);
   p->top++;
   p->st[p->top]=item;
   printf("Item inserted successfully\n");
   	 getch();
   	system("cls");
}
void pop(struct STACK *p)
{
   int item;
   if(p->top==-1)
   {
   	  printf("Underflow ,stack is empty");
   	  getch();
   	  system("cls");
	  return;
   }
  item=p->st[p->top];
   p->top--;
   printf("Item %d deleted successfully\n",item);
   	getch();
   	system("cls");
}
void peek(struct STACK *p)
{
   int item;
   if(p->top==-1)
   {
   	  printf("Underflow ,stack is empty");
   	  getch();
   	  system("cls");
	  return;
   }
   item=p->st[p->top];
   printf("Item %d is peek element\n",item);
   	getch();
   	system("cls");
}
