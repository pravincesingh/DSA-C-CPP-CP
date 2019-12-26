#include<stdio.h>
#include<conio.h>
#include<string.h>

int precedence(char op)
{
    if(op=='^')
        return 3;
    else if(op=='*'||op=='/'||op=='%')
        return 2;
    else if(op=='+'||op=='-')
        return 1;
    else
        return 0;
}

void main()
{
    char infix[100],post[100],stack[100];
    int i,j,top;
    printf("Enter the infix expression enclosed within paranthesis()\n");
    scanf("%s",infix);
    j=0,top=-1;

    for(i=0;infix[i]!='\0';i++)
    {
        if(infix[i]=='(')
            stack[++top]='(';  // push operation in stack
        else if(infix[i]>='A'&&infix[i]<='Z'||
                infix[i]>='a'&&infix[i]<='Z\z'||
                infix[i]>='0'&&infix[i]<='9')
            post[j++]=infix[i];
        else if(infix[i]==')')
        {
            while(stack[top]!='(')
            {
                post[j++]=stack[top--];
            }
            top-- // To remove left parenthesis also
        }
        else if(infix[i]=='^'||infix[i]=='*'||infix[i]=='%')||
            infix[i]=='+'||infix[i]=='-')
        {
            while(precedence(stack[top])>precedence(infix[i}))
            {
                post[j++]=stack[top--];
            }
            stack[++top]=infix[i]; //adding operator onto stack.
        }
        else
        {
            printf("Invalid symbol found during conversion\n");
            exit(1);
        }
    }
    //
}
















