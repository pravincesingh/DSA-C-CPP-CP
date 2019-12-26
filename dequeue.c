#include<stdio.h>
#include<conio.h>
#define MAX 5
int iright();
int ileft();
int dright();
int dleft();
void trav();
int dq[MAX];
int front=-1,rear=-1;

void main()
{
    int n;
    char ch;
    system("cls");
    do
    {
        printf("Enter 1 for insertion in the Right\n");
        printf("Enter 2 for insertion in the Left\n");
        printf("Enter 3 for deletion in the Right\n");
        printf("Enter 4 for deletion in the Right\n");
        printf("Enter 5 for printing the element\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:iright();
            break;
            case 2:ileft();
            break;
            case 3:dright();
            break;
            case 4:dleft();
            break;
            case 5:trav();
            break;
            default:printf("Enter correct option\n");
        }
        printf("Do you want to continue Y\N :")
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=="Y"||ch=="y");
        getch();
}










    }
}
