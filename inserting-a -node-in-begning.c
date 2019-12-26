#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;// store address of the next node
};
struct Node* head;//Global variable
void Insert(int x)
{
   struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head !=NULL)
        temp->next=head;
    head=temp;
}
void Print()
{
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head = NULL;//Empty list
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number \n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
}
