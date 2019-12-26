#include <stdio.h>

int main()
{
    int length=0,i=0,j=0;
    char a[20],b[30];
    printf("enter");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        i++;
        length++;
    }
   // printf("%d",length);

    i=0;
    while(i<length)
    {
        if(a[i]!='Z'&&a[i]!='A'&&a[i]!='R')
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            if(a[i]=='Z')
            {
                b[j]='!';
                j++;
                b[j]='!';
                j++;
                b[j]='!';
                j++;
            }
            if(a[i]=='A')
            {
                b[j]='@';
                j++;
                b[j]='@';
                j++;
            }
            if(a[i]=='R')
            {
                b[j]='$';
                j++;
            }
        }
        i++;
    }
    printf("%s",b);
    return 0;
}
