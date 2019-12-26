#include<stdio.h>
#include<conio.h>
struct singly
{
	int info;
struct singly *link;
};
struct singly *start=NULL;   // global pointer

void insert_start();
void insert_end();
void insert_anypos();
void insert_sorted();
void delete_start();
void delete_end();
void delete_anypos();
void traverse();

void main()
{ 
  int choice;
  do
  {
  	 printf("Select any operation of Link list\n");
	 printf("Press 1 for Traversal\n");
	 printf("Press 2 for Insert_start\n");
	 printf("Press 3 for Insert_end\n");
	 printf("Press 4 for Insert_anypos\n");
	 printf("Press 5 for Insert_Sorted \n");
	 printf("Press 6 for Delete_start\n");
	 printf("Press 7 for Delete_end\n");
	 printf("Press 8 for Delete_anypos\n");
	 printf("Press 9 for Exit\n");
	 printf("Please enter your choice\n");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	 	case 1:
	 		traverse();
	 		break;
	 	case 2:
	 		insert_start();
	 		break;
	    case 3:
	    	insert_end();
	    	break;
	 	case 4:
	 		insert_anypos();
	 		break;
	 	case 5:
	 		insert_sorted();
	 		break;
	    case 6:
	    	delete_start();
	    	break;
	 	case 7:
	 		delete_end();
	 		break;
	 	case 8:
	 		delete_anypos();
	 		break;
		case 9:
	    	 printf("Exiting from Menu\n");
	    	 break;
	 	default:
		   printf("Please enter valid choice\n");		
	 }
  }while(choice!=9);
  printf("Exiting from Program\n");
  getch();	
   getch();
}
void insert_start()
{
	struct singly *node;
	int item;
	node=malloc(sizeof(struct singly));
	if(node==NULL)
	{
		printf("Overflow");
		return;
	}
	printf("Enter the item to be stored\n");
	scanf("%d",&item);
	node->info=item;
	node->link=start;
	start=node;
	printf("Node inserted at starting successfully\n");
}
void traverse()
{
	struct singly *ptr;
	ptr=start;
	printf("Traversing begins now\n");
	while(ptr!=NULL)
    {
    	printf("%d ",ptr->info);
    	ptr=ptr->link;
    }
}
void insert_end()
{
	struct singly *ptr,*pptr,*node;
	int item;
	node=malloc(sizeof(struct singly));
	if(node==NULL)
	{
		printf("Overflow");
		return;
	}
	printf("Enter the item to be stored\n");
	scanf("%d",&item);
	node->info=item,node->link=NULL;
	ptr=start,pptr=NULL;
	while(ptr!=NULL)
	{
		pptr=ptr;
		ptr=ptr->link;
	}
	if(pptr!=NULL)
	  pptr->link=node;
	else
	  start=node;
printf("Node inserted at end successfully\n");	  
}
void insert_anypos()
{
	struct singly *ptr,*pptr,*node;
	int item,count=1,pos;
	printf("Enter the position where you want to insert the node\n");
	scanf("%d",&pos);
	ptr=start,pptr=NULL;
	while(ptr!=NULL && count<pos)
	{
		pptr=ptr;
		ptr=ptr->link; 
		count++;
	}	
	if(count!=pos)
	{
		printf("Invalid position\n");
		return;
	}
	node=malloc(sizeof(struct singly));
	if(node==NULL)
	{
		printf("Overflow");
		return;
	}
	printf("Enter the item to be stored\n");
	scanf("%d",&item);
	node->info=item;
	
	if(pptr!=NULL)
	  pptr->link=node;
	else
	  start=node;
	node->link=ptr;
	printf("Node inserted at position in link list sucessfully\n");
}
void insert_sorted()
{
    struct singly *ptr,*pptr,*node;
	int item;
	node=malloc(sizeof(struct singly));
	if(node==NULL)
	{
		printf("Overflow");
		return;
	}
	printf("Enter the item to be stored\n");
	scanf("%d",&item);
	node->info=item;
	ptr=start,pptr=NULL;
	while(ptr!=NULL && node->info>ptr->info)
	{
		pptr=ptr;
		ptr=ptr->link; 
	}	
	if(pptr!=NULL)
	  pptr->link=node;
	else
	  start=node;
	
	node->link=ptr;
	printf("Node inserted in sorted link list sucessfully\n");
}
void delete_start()
{
	struct singly *ptr;
	if(start==NULL)
	{
		printf("Undeflow Empty link list\n");
		return;
	}
	ptr=start;
	start=start->link;
	free(ptr);
	printf("Node deleted from start\n");	
}
void delete_end()
{
    struct singly *ptr,*pptr;
	if(start==NULL)
	{
		printf("Undeflow Empty link list\n");
		return;
	}	
	pptr=NULL,ptr=start;
	while(ptr->link!=NULL)
	{
		pptr=ptr;
		ptr=ptr->link;
	}
	if(pptr!=NULL)
	pptr->link=NULL;
	else
	start=NULL;
	free(ptr);
	printf("Node deleted from end\n");
	
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





