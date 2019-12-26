#include<stdio.h>
#include<conio.h>
const int size=10;   // global variable so now it can be accessed by entire program
#define size2 5
int n=0;       // total elements initially
void traverse(int *);
void insertion_sorted(int *);
void insertion_unsorted(int *);
void deletion(int *);
void linear_search(int *);
void binary_search(int *);
void selection_sort(int *);
void bubble_sort(int *);
void merge_sort(int *);

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
    printf("Array\n");
   printf("Press 1 for INSERTION_UNSORTED IN ARRAY\n");
   printf("Press 2 for INSERTION_SORTED IN ARRAY\n");
   printf("Press 3 for DELETION IN ARRAY\n");
   printf("Press 4 for LINEAR SEARCH IN ARRAY \n");
   printf("Press 5 for BINARY SEARCH IN ARRAY\n");
   printf("Press 6 for SELECTION SORT IN ARRAY\n");
   printf("Press 7 for BUBBLE SORT IN ARRAY\n");
   printf("Press 8 for MERGE SORT IN ARRAY\n");
   printf("Press 9 for TRAVERSAL OF ARRAY\n\n");
   //STACK
   printf("Stack\n");
    printf("Press 10 for PUSH OPERATION\n");
   printf("Press 11 for POP OPERATION\n");
   printf("Press 12 for PEEK OPERATION\n\n");
   // LINK LIST
   printf("Link list\n");
    printf("Enter 13 to Traverse the link list\n");
    printf("Enter 14 to insert in the begnning of link list\n");
    printf("Enter 15 to insert in the end of link list\n");
    printf("Enter 16 to insert at any position of link list\n");
    printf("Enter 17 to insert sorted of link list\n");
    printf("Enter 18 to delete from start of link list\n");
    printf("Enter 19 to delete from end of link list\n");
    printf("Enter 20 to delete from any position of link list\n\n");
    //QUEUE
    printf("Queue\n");
    printf("Enter 21 to Insert element to queue \n");
    printf("Enter 22 to Delete element from queue \n");
    printf("Enter 23 to Display all elements of queue \n");
   printf("Press 24for EXIT\n");
   printf("ENTER YOUR CHOICE\n");
   scanf("%d",&choice);
  	 switch(choice)
   	 {
   	 	case 1:
   	 		printf("Welcome to Insertion in unsorted array\n");
   	 		insertion_unsorted(arr);
   	 		break;
   	 	case 2:
   	 		printf("Welcome to Insertion in sorted array\n");
   	 		insertion_sorted(arr);
				break;
   	 	case 3:
   	 		printf("Welcome to deletion in array\n");
   	 		deletion(arr);
   	 		break;
   	 	case 4:
   	 		printf("Welcome to linear search in array\n");
   	 		linear_search(arr);
   	 		break;
   	 	case 5:
   	 		printf("Welcome to binary search in array\n");
   	 		binary_search(arr);
   	 		break;
   	 	case 6:
   	 		printf("Welcome to selection sort in array\n");
   	 		selection_sort(arr);
   	 		break;
   	 	case 7:
   	 		printf("Welcome to bubble sort in array\n");
   	 		bubble_sort(arr);
   	 		break;
   	 	case 8:
   	 		printf("Welcome to merge sort in array\n");
   	 		merge_sort(arr);
   	 		break;
   	 	case 9:
   	 		printf("Welcome to traversal in array\n");
   	 		traverse(arr);
			break;
        case 10:
            printf("Welcome to push operation in stack\n");
            push(&s1);
   	 		break;
   	 	case 11:
   	 	    printf("Welcome to pop operation in stack\n");
   	 		pop(&s1);
			break;
   	 	case 12:
   	 	    printf("Welcome to peek operation in stack\n");
			peek(&s1);
   	 		break;
        case 13:traverse_l();
                break;
            case 14:insert_start_l();
                break;
            case 15:insert_end_l();
                break;
           case 16:insert_any_pos_l();
                break;
            case 17:insert_sorted_l();
                break;
            case 18:delete_Start_l();
                break;
            case 19:delete_end_l();
                break;
            case 20:delete_anypos_l();
                break;

            case 21:insert_q();
                break;
            case 22:delete_q();
                break;
            case 23:display_q();
                break;
            case 24:printf("Exiting from the programme\n");
                break;
            default:printf("Enter correct option\n");
   	 }
   } while(choice>=1 && choice<=23);
   getch();
}


void traverse(int *p)
{
  // p==arr
  system("cls");  //   to clear the screen
int i;
printf("Array elements are\n");
for(i=0;i<n;i++)
{
   printf("%d ",p[i]);
}
  printf("\n------X------X------X------\n");
  getch();
  system("cls");    // to clear the screen
}


void insertion_sorted(int *p)
{
   int item,i;
   system("cls");
   if(n==size)
   {
   	  printf("Overflow array is full\n");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the item to be inserted\n");
   scanf("%d",&item);
   for(i=n-1;i>=0 && item<p[i];i--)
   {
   	  p[i+1]=p[i];
   }
   p[i+1]=item;
   n++;
   printf("ITem inserted successfully\n");
   getch();
   system("cls");
}

void insertion_unsorted(int *p)
{
   int item,i,pos;
   system("cls");
   if(n==size)
   {
   	  printf("Overflow array is full\n");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the position where you want to insert\n");
   scanf("%d",&pos);
   if(pos<0 || pos>n)
   {
   	  printf("Invalid position\n");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the item to be inserted\n");
   scanf("%d",&item);
   for(i=n-1;i>=pos ;i--)
   {
   	  p[i+1]=p[i];
   }
   p[pos]=item;
   n++;
   printf("ITem inserted successfully\n");
   getch();
   system("cls");
}
void deletion(int *p)
{
   int item,i,pos;
   system("cls");
   if(n==0)
   {
   	  printf("Underflow array is empty\n");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the position where you want to insert\n");
   scanf("%d",&pos);
   if(pos<0 || pos>=n)
   {
   	  printf("Invalid position\n");
   	  getch();
   	  system("cls");
	  return;
   }
   item=p[pos];
   for(i=pos;i<n-1;i++)
   {
   	  p[i]=p[i+1];
   }
   n--;
   printf("Item %d deleted successfully\n",item);
   	getch();
   	  system("cls");
}

void linear_search(int *p)
{
   int item,i;
   printf("Enter the item to be searched\n");
   scanf("%d",&item);
   for(i=0;i<n;i++)
   {
     	if(item==p[i])
     	{
     		printf("ITem found");
     		getch();
   	        system("cls");
	        return;
	    }
   }
     		printf("ITem not found");
     		getch();
   	        system("cls");
}
void binary_search(int *p)
{
   int item,LB,UB,MID;
   printf("Enter the item to be searched\n");
   scanf("%d",&item);
   LB=0;UB=n-1;
   while(LB<=UB)
   {
   	    MID=(LB+UB)/2;
     	if(item==p[MID])
     	{
     		printf("ITem found");
     		getch();
   	        system("cls");
	        return;
	    }
	    else if(item>p[MID])
	    {
	    	LB=MID+1;
	    }
	    else
	    {
	    	UB=MID-1;
	    }
   }
     		printf("ITem not found");
     		getch();
   	        system("cls");
}
void selection_sort(int *p)
{
   int i,j,temp;
   for(i=0;i<n-1;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   		if(p[i]>p[j])
        {
        	temp=p[i],p[i]=p[j],p[j]=temp;
        }
   	}
   }
   printf("Array sorted successfully using selection sort\n");
   getch();
   	        system("cls");
}
void bubble_sort(int *p)
{
   	int i,j,temp;
   for(i=1;i<=n-1;i++)
   {
   	for(j=0;j<n-i;j++)
   	{
   		if(p[j]<p[j+1])
        {
        	temp=p[j],p[j]=p[j+1],p[j+1]=temp;
        }
   	}
   }
   printf("Array sorted successfully using bubble sort\n");
   getch();
   	        system("cls");
}
void merge_sort(int *p)
{
   int gap,i,j,k;
   int temp[10];
   int LB1,LB2,UB1,UB2;
   for(gap=1;gap<=n-1;gap=gap*2)
   {
   	   LB1=0,k=0;
   	   while(LB1+gap<n)
   	   {
   	   	 LB2=LB1+gap;
   	   	 UB1=LB2-1;
   	   	 if(UB1+gap<n)
   	   	   UB2=UB1+gap;
   	   	 else
   	   	   UB2=n-1;
   	   	 while(LB1<=UB1 && LB2<=UB2)
   	   	 {
   	   	 	if(p[LB1]<p[LB2])
   	   	 	  temp[k++]=p[LB1++];
   	   	 	else
			  temp[k++]=p[LB2++];
   	   	 }
   	   	 while(LB1<=UB1)
   	   	 {
   	   	 	temp[k++]=p[LB1++];
   	   	 }
   	   	 while(LB2<=UB2)
   	   	 {
   	   	 	temp[k++]=p[LB2++];
   	   	 }
   	   	 LB1=UB2+1;
   	   }
   	   for(i=0;i<=UB2;i++)
   	   {
   	   	 p[i]=temp[i];
   	   }
   }
   printf("Array sorted successfully using merge sort\n");
   getch();
   	        system("cls");
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
