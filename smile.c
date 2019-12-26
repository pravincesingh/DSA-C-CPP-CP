#include <stdio.h>

int main()
{
int x,y;
char i=1;
for(x=1;x<=800;x++) //since there are 800 pixels on X axis, one char is 1 pixel i assume
{
printf(" %c ", i); //prints a smiley (you forgot to give a space after " %c " )
if(x==800)
printf("\n"); //gives a line break when 800 pixels are reached
y=x;
if(y==800)
break;

}
}
