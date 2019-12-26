#include<stdio.h>
struct singly
{
    int info;
    struct singly *link;
};
void main()
{
    struct singly n1,n2,n3,n4;
    n1.info=20;
    n2.info=30;
    n3.info=50;
    n4.info=90;
    n1.link=&n2;
    n2.link=&n3;
    n3.link=&n4;
    n4.link=NULL;
    struct singly *start=&n1;
    struct singly *PTR;
    PTR=start;
    while(PTR!=NULL)
    {
        printf("%d->",PTR->info);
        PTR=PTR->link;
    }
}
