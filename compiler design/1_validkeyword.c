#include<stdio.h>
void main()
{
    char key[32][10]={"int" ,"char","double","for","while"};
    char str[10];
    int i,flag=0;
    printf("Enter string :");
    gets(str);

    for(i=0;i<32;i++)
    {
        if(strcmp(key[i],str)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Not a valid keyword ");
    else
        printf("Valid keyword ");

}
