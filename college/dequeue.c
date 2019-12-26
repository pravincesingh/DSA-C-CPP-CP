#include<stdio.h>
#include<conio.h>
#define MAX 4

void insert_left();
void insert_right();
void delete_left();
void delete_right();
int q[MAX];
int left=-1,right=-1;

void main()
{
    system("cls");
    int choice;
    char ch;
    do
    {
        printf("Press 1 to Insert at left\n");
        printf("Press 2 to Insert at right\n");
        printf("Press 3 to Delete from left\n");
        printf("Press 4 to Delete right\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert_left();
            break;
           case 2:insert_right();
            break;
            case 3:delete_left();
            break;
            case 4:delete_right();
            break;
            default:
                printf("Enter correct option");

        }
        printf("Do you want to continue Y/N");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while(ch=='y'||ch=='Y');
}



void insert_left()
{
    int item;
    printf("Enter item :");
    scanf("%d",&item);
    if(left==0&&right==MAX-1||left==right+1)
    {
        printf("Queue is full\n");
        getch();
    }
    else if(left==-1)
    {
        left=right=0;
    }
    else if(left==0)
        left=MAX-1;
    else
        left--;
    q[left]=item;
}

void insert_right()

{
    int item;
    printf("Enter item :");
    scanf("%d",&item);
    if(left==0&&right==MAX-1||left==right+1)
    {
        printf("Queue is full\n");
        getch();
    }
     else if(left==-1)
    {
        left=right=0;
    }
    else if(right==MAX-1)
        right=0;
    else
        right++;
    q[right]=item;
}


void delete_right()
{
    int item;
    if(left==-1)
    {
        printf("Queue is underflow\n");
        getch();
    }
    item=q[right];
    if(left==right)
    {
        left=right=-1;
    }
    else if(right==0)
    {
        right=MAX-1;
    }
    else
        right=right-1;
    printf("Deleted item from right is %d\n",item);
}

void delete_left()
{
    int item;
    if(left==-1)
    {
        printf("Queue is underflow");
        getch();
    }
    item=q[left];
    if(left==right)
    {
        left=right=-1;
    }
    else if(left==MAX-1)
    {
        left=0;
    }
    else
    {
        left=left+1;
    }
    printf("Deleted item from right is %d",item);
}

