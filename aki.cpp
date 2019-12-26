#in
void main()  {
char *s[]={ "dharma","hewlett-packard","siemens","ibm"};
char **p;
p=s;
printf("%s",++*p);
printf("%s",*p++);
printf("%s",++*p);  }
