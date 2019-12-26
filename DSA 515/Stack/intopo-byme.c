#include<stdio.h>

void main()
{
    char infix[100],post[100],stack[100];
    int i,j,top;
    printf("Enter the infix expression enclosed within parenthesis()\n");
    scanf("%s",infix);
    //parenthesis_checker(infix);
    j=0,top=-1;
    for(i=0;infix[i]!='\0';i++)
    {
        if(infix[i]=='(')
            stack[++top]='(' // Push operation on stack
        else if(infix[i]>='A'&&infix[i]<='Z'||
                infix[i]>='a'&&infix[i]<='z'||
                infix[i]>='0'&&infix[i]<='9')
            post[j++]=infix[i];
        else if(infix[i]==')')
        {
            while(stack[top]!='(')
            {
                post[j++]=stack[top--];
            }
            top--; // To remove left parenthesis also
        }
        else if(infix[i]=='^'||infix[i]=='*'||infix[i]=='/'||infix[i]=='%'||infix[i]=='+'||infix[i]=='-')
        {
            while(precedence(Stack[top])>=precedence(infix[i]))
            {
                post[j++]=stack[top--];
            }
            stack[++top]=infix[i];//Adding operator onto stack

        }
        else
        {
            printf("Invalid symbol found during conversion\n");
            exit(1);
        }
    }
}
