#include<stdio.h>
#include<string.h>
int main()
{
    char key[32][10]={"auto","break","case","char","const","if","else","int"};

    char id[20];
    int i;
    int flag=0;
    printf("Enter a Keyword :");
    gets(id);

    for(i=0;i<32;i++)
    {
        if(strcmp(id,key[i])==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Invalid keyword");
    else
        printf("Valid keyword");
}
