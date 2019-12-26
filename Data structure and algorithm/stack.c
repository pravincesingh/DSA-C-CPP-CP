#include<stdio.h>
#include<conio.h>
#define size 5
void push();
void pop();
void peek();
int stack[size];
int top=-1;

void main()
{
    int choice;

    do
    {
        system("cls");
        printf("Enter 1 for push operation \n");
        printf("Enter 2 for pop operation \n");
        printf("Enter 3 for peek operation \n");
        printf("Enter 4 to exit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            default:printf("Enter correct option\n");
        }
        getch();
    }while(choice>=1&&choice<=3);
}

void push()
{
    int item;

    if(top==size-1)
    {
         printf("Overflow\n");
         return;
    }
    else
    {
        if(top==-1)
            top=0;
        else
            top++;
        printf("WELCOME TO PUSH OPERATION\n");
        printf("Enter the item you want to push in the stack :");
        scanf("%d",&item);
        stack[top]=item;
    }
    printf("Item %d inserted successfully", item);
}

void pop()
{
    printf("WELCOME TO POP OPERATION\n");
    int item;
    if(top==-1)
    {
        printf("Underflow\n");
        return;
    }
    else
    {
        item=stack[top];
        top--;
    }
    printf("Item %d is popped\n",item);

}

void peek()
{
    int item;
    if(top==-1)
        {
            printf("No item to display\n");
            return;
        }
    else
    {
        item=stack[top];
    }
    printf("Item %d is ppeeked\n",item);

}


