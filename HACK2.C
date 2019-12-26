#include<stdio.h>
void main()
{
int N, i;
scanf("%d",&N);
int numArrayA[N],numArrayB[N],sumArray[N];

for(i=0;i<N;i++)
    sumArray[N]=0;

for(i=0;i<N;i++)
    scanf("%d",&numArrayA[i]);

for(i=0;i<N;i++)
    scanf("%d",&numArrayB[i])

for(i=0;i<N;i++)
    sumArray[i]=numArrayA[i]+numArrayB[i];

for(i=0;i<N;i++)
    printf("%d ",sumArray[i])


}
