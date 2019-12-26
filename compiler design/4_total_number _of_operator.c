#include<stdio.h>
#include<string.h>

void main()
{
    char op[10][2]={"+","-","*","/","!"};
    FILE *fp;
    int count=0,i;
    char filename[20],ch[10];
    printf("Enter the file name :");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL)
        printf("wrong file name ");
    else
    {
        while(!feof(fp))
        {
            fscanf(fp,"%s",ch);
            for(i=0;i<10;i++)
                if(strcmp(ch,op[i])==0)
                    count++;

            strcpy(ch,"");
        }
        printf("Total number of operators are :%d",count);
    }
}
