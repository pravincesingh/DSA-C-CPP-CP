#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct singly
{
    int info;
    struct singly *link;
};

struct singly *start=NULL;

void insert_end();
void traverse();

void main()
{
    int choice;

    do
    {
        system("cls");
        printf("Enter 1 to insert in the end\n");
        printf("Enter 2 to Traverse the link list\n");
        printf("Enter 3 to Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:insert_end();
            break;
            case 2:traverse();
            break;
        }
        getch();
    }while(choice>=1&&choice<=2);
}
void insert_end()
{
    int item;
    struct singly *node;
    struct singly *PTR=start;
    struct singly *PPTR=NULL;
    node=malloc(sizeof(struct singly));
    if(node==NULL)
    {
        printf("Overflow");
        return;
    }

    printf("Enter the element :");
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
printf("Item %d inserted successfully\n",item);
}
void traverse()
{
    struct singly *PTR=start;
    if(PTR==NULL)
    {
        printf("No item to display\n");
        return;
    }
    while(PTR!=NULL)
    {
        printf(" %d",PTR->info);
        PTR=PTR->link;
    }
}



