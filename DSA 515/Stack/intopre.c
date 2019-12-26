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
   char infix[100],pre[100],stack[100];
   int i,j,top;
   int L;
   printf("Enter the infix expression enclosed within paranthesis()\n");
   scanf("%s",infix);
   L=strlen(infix)-1;
   j=0,top=-1;
   for(i=L;i>=0;i--)
   {
   	  if(infix[i]==')')
   	     stack[++top]=')';   // push operation in stack
   	  else if(infix[i]>='A'&& infix[i]<='Z'||infix[i]>='a'&& infix[i]<='z'||
		 infix[i]>='0'&& infix[i]<='9')
	     pre[j++]=infix[i];   
	  else if(infix[i]=='(')
	  {
	  	 while(stack[top]!=')') 
		 {
		    pre[j++]=stack[top--];  	
		 } 
		 top--;  // to remove left paranthesis also
	  }
	  else if(infix[i]=='^'||infix[i]=='*'||infix[i]=='/'||infix[i]=='%'||
	  infix[i]=='+'||infix[i]=='-')
	  {
	  	 while(precedence(stack[top])>precedence(infix[i]))
	  	 {
	  	   pre[j++]=stack[top--];	 
	  	 }
	  	 stack[++top]=infix[i]; // adding operator onto stack.
	  }
	  else
	  {
	  	 printf("Invalid symbol found during conversion\n");
	  	 exit(1);
	  }
   }
   // if user is not entering expression within paranthesis
   // than you have to forcefully empty the stack after scanning.
   while(top>=0)  // is stack empty or not
   {
    pre[j++]=stack[top--];  	
   }
   pre[j]='\0';   // storing NULL character to mark termination in the postfix
                   // expression      
   // now reversing the prefix expression
   strrev(pre);  // will reverse the string.
   printf("Infix expression is\n");
   printf("%s\n",infix);
   printf("Prefix expression is\n");
   printf("%s\n",pre);
   getch();
}

