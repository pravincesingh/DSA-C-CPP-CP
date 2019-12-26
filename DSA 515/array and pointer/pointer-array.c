#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size,i;
    int *p;
    printf("Enter the size of array \n");
    scanf("%d",&size);
    p=malloc(size*sizeof(int));
    if(p==NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }
    // int p[size] assume and use
    printf("Enter the elements");
    for(i=0;i<size;i++)
        scanf("%d",&p[i]);
    printf("The elements are :");
    for(i=0;i<size;i++)
        printf("%d ",p[i]);

}
