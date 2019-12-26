#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct singly
{
    int info;
    struct singly *link;
};
struct singly *start=NULL;
void traverse();
void insert_start();
void insert_end();
void insert_any_pos();
void insert_sorted();
void delete_Start();
void delete_end();
void delete_anypos();
void main()
{
    int choice;

    do{
        system("cls");
        printf("Select any operation of link list\n");
        printf("Enter 1 to Traverse the link\n");
        printf("Enter 2 to insert in the begning\n");
        printf("Enter 3 to insert in the end\n");
        printf("Enter 4 to insert at any position\n");
        printf("Enter 5 to insert sorted\n");
        printf("Enter 6 to delete from start\n");
        printf("Enter 7 to delete from end\n");
        printf("Enter 8 to delete from any position\n");
        printf("Enter 9 to exit\n");
        printf("Please enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:traverse();
                break;
            case 2:insert_start();
                break;
            case 3:insert_end();
                break;
           case 4:insert_any_pos();
                break;
            case 5:insert_sorted();
                break;
            case 6:delete_Start();
                break;
            case 7:delete_end();
                break;
            case 8:delete_anypos();
                break;
            case 9:printf("Exiting from the programme\n");
                break;

            default:printf("Enter correct option\n");
        }
        getch();
    }while(choice!=9);

}

void insert_start()
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

void traverse()
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

}

void insert_end()
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

}


void insert_any_pos()
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
}

void delete_Start()
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
}
void insert_sorted()
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
}


void delete_end()
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
}

void delete_anypos()
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
}



















