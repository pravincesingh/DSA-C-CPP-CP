#include <stdio.h>
#include <stdlib.h>

char *inputString(FILE* fp, size_t size){
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(char)*size);
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(char)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(char)*len);
}
int count(char s[] , char c ,int pos)
{
    int res=0;
    int i;
    for(i=0;i<pos;i++)
    {
        if(s[i]==c)
            res++;
    }
    return res;
}


int main(void){


        int n;
        char *m;
        int testcases;
        int i;
            int pos;
    char c;
    scanf("%d\n",&n);
    printf("this is length");
    m = inputString(stdin, 10);
    printf("this is string");
    scanf("%d\n",&testcases);
    printf("this is testcase");
    for(i=0;i<testcases;i++)
    {
    scanf("%d\n",&pos);
    printf("this is position");
    pos=pos-1;
    c=m[pos];
    printf("%d\n",count(m,c,pos));
    }
    free(m);
    return 0;
}
