#include<stdio.h>

void main(){
char *s[]={ "dharma","hewlett-packard","siemens","ibm"};
char **p;
p=s;
printf("%s\n",++*p);
printf("%s\n",*p++);
printf("%s\n",++*p);

}
