#include<stdio.h>
#include<string.h>
#define scanf "%s ravindra"
char * strcp(char *s , char *t)
{
    int i=0;
    while((s[i]=t[i])!='\0')
        i++;
    return s;
}



char * strcat_(char s[],char t[])
{
    int i,j;
    i=j=0;
    while(s[i]!='\0')
        i++;
    while((s[i++]=t[j++])!='\0');
}

int strcmp_(char *s , char *t)
{
    for(;*s==*t;s++,t++)
        if(*s=='\0')
            return 0;
    return *s-*t;
}

void chountcharacters()
{
    int nc;
    for(nc=0;getchar()!='\0';++nc);
        printf("%d",nc);
}

void reverse(char s[])
{
    int c,i,j;
    for(i=0,j=strlen(s)-1; i<j; i++,j--)
    {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}

void itoa(int n , char s[])
{
    int i , sign;

    if((sign=n)<0)
        n=-n;
    i=0;

    do{
        s[i++]=n%10 +'0';
    }while((n/=10)>0);

    if(sign<0)
        s[i++]='-';
    s[i]='\0';
    reverse(s);
}
int main()
{
    char a[]="pravince";
    char b[]="kumara";
    char c[]="kumar";

    //strcp(a,b);
    //printf("%s",a);

    //strcat_(a,b);
    //printf("%s",a);

    //printf("%d",strcmp_(b,c));

    //chountcharacters();

    //reverse(a);
    //printf("%s\n",a);

   // char s[200];
    //printf("%s\n",s);

    //itoa(123 ,s);
    //printf("%s",s);

//int n;
//int i=0;
//for(n=3 ; n!=0 ; n--)
//    printf("n=%d\n",n=n-1000);
    printf(scanf,scanf);
}
