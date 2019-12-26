#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char fname[20];
    char ch;
    int count[26],i;
    char a='A';
    printf("Enter file name :");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else{
        for(i=0;i<26;i++)
            count[i]=0;
        while(!feof(fp))
        {
            ch=getc(fp);
            if(ch>='a'&&ch<='z')
                count[ch-97]++;
            if(ch>='A'&&ch<='Z')
                count[ch-65]++;
        }
    }
        for(i=0;i<26;i++)
        {
            if(count[i]!=0)
             printf("%c : %d\n",a++,count[i]);
        }

}
