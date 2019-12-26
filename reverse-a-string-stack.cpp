#include<iostream>
#include<stack>// stack from STL.
#include<stdio.h>
#include<string.h>
using namespace std;

void Reverse(char *C,int n)
{
    stack<char> S;
    //Loop for push
    for(int i=0;i<n;i++)
    {
        S.push(C[i]);
    }
    //Loop for pop
    for(int i=0;i<n;i++)
    {
        C[i]=S.top();//Overwrite the character at index i.
        S.pop();//Perform pop.
    }
}

int main()
{
    char C[51];
    printf("Enter a string: ");
    gets(C);
    Reverse(C,strlen(C));
    printf("Output = %s",C);
}



