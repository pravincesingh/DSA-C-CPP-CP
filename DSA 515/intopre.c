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
void evalpre(char *pre)
{
     int stack[100],op1,op2,r;
     int i,top=-1;
     int L=strlen(pre);
     for(i=L-1;i>=0;i--)
     {
     	if(pre[i]>='0' && pre[i]<='9')  // checking for operand
     	{
     	   top++;
			stack[top]=pre[i]-48;	 
     	}
     	else
     	{
     	   op1=stack[top],top--;  // removing top element from stack
		   op2=stack[top],top--;  // removing next-top element from stack
		   if(pre[i]=='+')
		     r=op1+op2;
		   else if(pre[i]=='-')
		     r=op1-op2;
		   else if(pre[i]=='*')
		     r=op1*op2;
		   else if(pre[i]=='/')
		     r=op1/op2;
		   else if(pre[i]=='%')
		     r=op1%op2;
		   else if(pre[i]=='^')
		     r=(int)pow(op1,op2);       		   
	     	stack[++top]=r;		
     	}
     }
     r=stack[top],top--;
     printf("Result of evaluation=%d",r);
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
   evalpre(pre);
   getch();
}

