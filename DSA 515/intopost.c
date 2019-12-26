#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
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
void paranthesis_checker(char *infix)
{
    char stack[100];
	int top=-1,i;
	for(i=0;infix[i]!='\0';i++)
	{
		if(infix[i]=='(')
		  top++,stack[top]='(';
		else if(infix[i]==')')
		{
			if(top==-1)
			{
			  printf("Invalid expression");
			  exit(1);
		    }
		    top--;  // remove the left paranthesis
		}      
	}	
	if(top==-1)
	{
		printf("Expression is valid");
	}
	else
	{
	 printf("Invalid expression");
			  exit(1);	
	}
}
void evalpost(char *post)
{
     int stack[100],op1,op2,r;
     int i,top=-1;
     for(i=0;post[i]!='\0';i++)
     {
     	if(post[i]>='0' && post[i]<='9')  // checking for operand
     	{
     	   top++;
			stack[top]=post[i]-48;	 
     	}
     	else
     	{
     	   op2=stack[top],top--;  // removing top element from stack
		   op1=stack[top],top--;  // removing next-top element from stack
		   if(post[i]=='+')
		     r=op1+op2;
		   else if(post[i]=='-')
		     r=op1-op2;
		   else if(post[i]=='*')
		     r=op1*op2;
		   else if(post[i]=='/')
		     r=op1/op2;
		   else if(post[i]=='%')
		     r=op1%op2;
		   else if(post[i]=='^')
		     r=(int)pow(op1,op2);       		   
	     	stack[++top]=r;		
     	}
     }
     r=stack[top],top--;
     printf("Result of evaluation=%d",r);
}
void main()
{
   char infix[100],post[100],stack[100];
   int i,j,top;
   printf("Enter the infix expression enclosed within paranthesis()\n");
   scanf("%s",infix);
  // paranthesis_checker(infix);
   j=0,top=-1;
   for(i=0;infix[i]!='\0';i++)
   {
   	  if(infix[i]=='(')
   	     stack[++top]='(';   // push operation in stack
   	  else if(infix[i]>='A'&& infix[i]<='Z'||infix[i]>='a'&& infix[i]<='z'||
		 infix[i]>='0'&& infix[i]<='9')
	     post[j++]=infix[i];   
	  else if(infix[i]==')')
	  {
	  	 while(stack[top]!='(') 
		 {
		    post[j++]=stack[top--];  	
		 } 
		 top--;  // to remove left paranthesis also
	  }
	  else if(infix[i]=='^'||infix[i]=='*'||infix[i]=='/'||infix[i]=='%'||
	  infix[i]=='+'||infix[i]=='-')
	  {
	  	 while(precedence(stack[top])>=precedence(infix[i]))
	  	 {
	  	   post[j++]=stack[top--];	 
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
    post[j++]=stack[top--];  	
   }
   post[j]='\0';   // storing NULL character to mark termination in the postfix
                   // expression      
   printf("Infix expression is\n");
   printf("%s\n",infix);
   printf("Posfix expression is\n");
   printf("%s\n",post);
   evalpost(post);
   getch();
}

