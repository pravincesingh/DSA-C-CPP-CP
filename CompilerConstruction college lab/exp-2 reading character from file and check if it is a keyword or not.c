#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char key[32][10]={"int","char","float","break","continue","if","double"};
    char ch[10];

    int i;
    int flag=0;
    fp=fopen("textfile.txt","r");
    if(fp==NULL)
    {
        printf("File doesnot exits");
    }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s",ch);
            for(i=0;i<32;i++)
            {
                if(strcmp(ch, key[i])==0)
                {
                    printf("%s is a keyword \n",ch);
                    flag=1;
                }
            }
            if(flag==0)
                printf("%s is not a keyword\n",ch);
            flag=0;
            strcpy(ch,"");
        }
    }
    getch();
}
