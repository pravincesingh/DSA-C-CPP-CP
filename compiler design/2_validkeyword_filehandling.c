#include<stdio.h>
#include<string.h>
void main()
{
    char key[32][10]={"int","char","void","for"};
    int i=0,flag=0;
    char ch[10];
    FILE *fp;
    fp=fopen("filename.txt","r");

    if(fp==NULL)
        printf("File is not present ");
    else
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s",ch);
            for(i=0;i<32;i++)
            {
                if(strcmp(ch,key[i])==0)
                {
                    flag=1;
                    printf("%s is a keyword \n",ch);
                }
            }
            if(flag==0)
                printf("%s is not a keyword \n",ch);
            flag=0;
            strcpy(ch,"");
        }
    }
}
