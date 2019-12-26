
#include<stdio.h>
#include<conio.h>
const int size=10;   // global variable so now it can be accessed by entire program
#define size2 5
int n=0;       // total elements initially


struct STACK
{
int st[size2];
int top;
};
void push(struct STACK *);
void pop(struct STACK *);
void peek(struct STACK *);

struct singly
{
    int info;
    struct singly *link;
};
struct singly *start=NULL;
void traverse_l();
void insert_start_l();
void insert_end_l();
void insert_any_pos_l();
void insert_sorted_l();
void delete_Start_l();
void delete_end_l();
void delete_anypos_l();


#define MAXQ 50

int queue_array[MAXQ];

int rear = - 1;

int front = - 1;
void main()
{
   int choice;
   int arr[10];
    struct STACK s1;
   s1.top=-1;
   do
   {
    system("cls");

   printf("Stack\n");
    printf("Press 1 for PUSH OPERATION\n");
   printf("Press 2 for POP OPERATION\n");
   printf("Press 3 for PEEK OPERATION\n\n");
   // LINK LIST
   printf("Link list\n");
    printf("Enter 4 to Traverse the link list\n");
    printf("Enter 5 to insert in the begnning of link list\n");
    printf("Enter 6 to insert in the end of link list\n");
    printf("Enter 7 to insert at any position of link list\n");
    printf("Enter 8 to insert sorted of link list\n");
    printf("Enter 9 to delete from start of link list\n");
    printf("Enter 10 to delete from end of link list\n");
    printf("Enter 11 to delete from any position of link list\n\n");
    //QUEUE
    printf("Queue\n");
    printf("Enter 12 to Insert element to queue \n");
    printf("Enter 13 to Delete element from queue \n");
    printf("Enter 14 to Display all elements of queue \n");
   printf("Press 15for EXIT\n");
   printf("ENTER YOUR CHOICE\n");
   scanf("%d",&choice);
  	 switch(choice)
   	 {

        case 1:
            printf("Welcome to push operation in stack\n");
            push(&s1);
   	 		break;
   	 	case 2:
   	 	    printf("Welcome to pop operation in stack\n");
   	 		pop(&s1);
			break;
   	 	case 3:
   	 	    printf("Welcome to peek operation in stack\n");
			peek(&s1);
   	 		break;
        case 4:traverse_l();
                break;
            case 5:insert_start_l();
                break;
            case 6:insert_end_l();
                break;
           case 7:insert_any_pos_l();
                break;
            case 8:insert_sorted_l();
                break;
            case 9:delete_Start_l();
                break;
            case 10:delete_end_l();
                break;
            case 11:delete_anypos_l();
                break;

            case 12:insert_q();
                break;
            case 13:delete_q();
                break;
            case 14:display_q();
                break;
            case 15:printf("Exiting from the programme\n");
                break;
            default:printf("Enter correct option\n");
   	 }
   } while(choice>=1 && choice<=14);
   getch();
}



void push(struct STACK *p)
{
   int item;
   if(p->top==size2-1)
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


//Link list
void insert_start_l()
{
    struct singly *node;
    int item;
    node=malloc(sizeof(struct singly));
    if(node==NULL)
    {
        printf("Overflow\n");
        return;
    }

    printf("Enter the item you want to store :");
    scanf("%d",&item);
    node->info=item;
    node->link=start;
    start=node;
    printf("Node inserted at starting successfully\n");

}

void traverse_l()
{

    struct singly *PTR;
    PTR=start;
    if(PTR==NULL)
        printf("No item to display\n");
    else
    {
        printf("Traversing begins now\n");
        while(PTR!=NULL)
        {
            printf("%d ",PTR->info);
            PTR=PTR->link;
        }
    }
getch();
}

void insert_end_l()
{
    struct singly *node;
    struct singly *PPTR=NULL;
    struct singly *PTR=start;
    int item;
    node=malloc(sizeof(struct singly));
    if(node==NULL)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter the item :");
    scanf("%d",&item);
    node->info=item;
    node->link=NULL;
    while(PTR!=NULL)
    {
        PPTR=PTR;
        PTR=PTR->link;
    }
    if(PPTR!=NULL)
        PPTR->link=node;
    else
        start=node;
    printf("Node inserted at the end successfully\n");
getch();
}


void insert_any_pos_l()
{
    struct singly *PTR,*PPTR,*node;
    int count=1,pos,item;
    printf("Enter the position at which you want to insert the item :");
    scanf("%d",&pos);
    PPTR=NULL;
    PTR=start;

    while(PTR!=NULL&&count<pos)
    {
        PPTR=PTR;
        PTR=PTR->link;
        count++;
    }
    if(count!=  pos)
    {
         printf("Invalid position\n");
         return;
    }
node=malloc(sizeof(struct singly));
    if(node==NULL)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter the item you want to insert :");
    scanf("%d",&item);
     node->info=item;

    if(PPTR!=NULL)
    {
        PPTR->link=node;

    }
    else
    {
        start=node;

    }
   node->link=PTR;
    printf("Item inserted successfully");
    getch();
}

void delete_Start_l()
{
    struct singly *PTR;
    if(start==NULL)
    {
        printf("Under flow: No item to delete\n");
        return;
    }
    PTR=start;
    start=start->link;
    free(PTR);
    printf("Deleted from start successfully\n");
    getch();
}
void insert_sorted_l()
{
    struct singly *PTR,*PPTR,*node;
    int item;

    node=malloc(sizeof(struct singly));
    if(node==NULL)
	{
		printf("Overflow");
		return;
	}
printf("Enter the item you want to insert sorted :");
    scanf("%d",&item);
     node->info=item;
     PPTR=NULL;
    PTR=start;
  while(PTR!=NULL&&PTR->info<node->info)
    {
        PPTR=PTR;
        PTR=PTR->link;
    }

    if(PPTR!=NULL)
    {
        PPTR->link=node;

    }
    else
    {
        start=node;

    }
   node->link=PTR;
    printf("Item inserted successfully");
    getch();
}


void delete_end_l()
{
    struct singly *PTR,*PPTR;
    PTR=start;
    PPTR=NULL;
    while(PTR!=NULL)
    {
        PPTR=PTR;
        PTR=PTR->link;
    }
    PPTR=NULL;
    printf("Item deleted from end\n");
    getch();
}

void delete_anypos_l()
{
    struct singly *ptr,*pptr;
    int count=1,pos;
	if(start==NULL)
	{
		printf("Undeflow Empty link list\n");
		return;
	}
	printf("Enter the position from where you want to delete\n");
	scanf("%d",&pos);
	pptr=NULL,ptr=start;
    while(count<pos && ptr!=NULL)
    {
    	count++;
    	pptr=ptr;
    	ptr=ptr->link;
    }
    if(ptr==NULL)
	{
		printf("Invalid position node not found\n");
		return;
	}
	else if(pptr!=NULL)
	{
		pptr->link=ptr->link;
	}
	else
	{
		start=start->link;
	}
	free(ptr);
	printf("Node deleted from position\n");
	getch();

}




insert_q()

{

    int add_item;

    if (rear == MAXQ - 1)

    printf("Queue Overflow \n");

    else

    {

        if (front == - 1)

        /*If queue is initially empty */

        front = 0;

        printf("Inset the element in queue : ");

        scanf("%d", &add_item);

        rear = rear + 1;

        queue_array[rear] = add_item;

    }
    getch();
    system("cls");

} /*End of insert()*/



delete_q()

{

    if (front == - 1 || front > rear)

    {

        printf("Queue Underflow \n");

        return ;

    }

    else

    {

        printf("Element deleted from queue is : %d\n", queue_array[front]);

        front = front + 1;

    }
         		getch();
   	        system("cls");

} /*End of delete() */

display_q()

{

    int i;

    if (front == - 1)

        printf("Queue is empty \n");

    else

    {

        printf("Queue is : \n");

        for (i = front; i <= rear; i++)

            printf("%d ", queue_array[i]);

        printf("\n");

    }
     		getch();
   	        system("cls");
}
