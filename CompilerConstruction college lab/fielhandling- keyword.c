#include<stdio.h>
#include<string.h>
void main()
{
    char fname[20];
    FILE *fp;
    int i,flag=0;
    char keyword[32][10]={"int","float","ram","shyam","auto"};
    char ch[10];
    printf("Enter the file name :");
    scanf("%s",fname);

    fp =fopen(fname,"r");
    if(fp==NULL)
        printf("File doesnot exist ");
    while(!feof(fp))
    {
        fscanf(fp,"%s",ch);
        for(i=0;i<32;i++)
        {
          if(strcmp(ch,keyword[i])==0)
          {
              printf("%s is a keyword\n",ch);
              flag=1;
          }
        }
        if(flag==0)
            printf("%s is not a keyword\n",ch);
        strcpy(ch,"");
    }
}
