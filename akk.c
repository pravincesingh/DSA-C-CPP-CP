#include<stdio.h>

struct st
{
    int n;
    char names[1000][20];
};

void main()
{
    int v[100][8],T,N,K,size;
    struct st l[100];

        for(int i=0;i<100;i++)
    {
        for(int j=0;j<8;j++)
        {
            v[i][j]=0;
        }
    }
    scanf("%d",&T);
    //K=T;
    for(int j=0;j<T;j++)
    {
        scanf("%d",&N);
        l[j].n=N;
        for(int i=0;i<N;i++)
        {
            scanf("%s",l[j].names[i]);

        }
    }

    for(K=0;K<T;K++)
    {    size=l[K].n;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(l[K].names[i][j]=='b'||l[K].names[i][j]=='B')
            {
                v[K][1]++;;
            }
            if(l[K].names[i][j]=='e'||l[K].names[i][j]=='E')
            {   v[K][0]++;

            }
            if(l[K].names[i][j]=='i'||l[K].names[i][j]=='I')
           {     v[K][2]++;;
            }
            if(l[K].names[i][j]=='n'||l[K].names[i][j]=='N')
            {
                v[K][3]++;
            }
            if(l[K].names[i][j]=='g'||l[K].names[i][j]=='G')
            {
                v[K][4]++;
            }
            if(l[K].names[i][j]=='z'||l[K].names[i][j]=='Z')
            {
                v[K][5]++;
            }
            if(l[K].names[i][j]=='r'||l[K].names[i][j]=='R')
            {
                v[K][6]++;
            }
            if(l[K].names[i][j]=='o'||l[K].names[i][j]=='O')
            {
                v[K][7]++;
            }
        }

    }
    }
    for(int m=0;m<T;m++)
    {int small;
    small=v[m][0];
    v[m][0]/=2;
        if((v[m][0])>=1&& v[m][1]>=1&&v[m][2]>=1&&v[m][3]>=1&&v[m][4]>=1&&v[m][5]>=1&&v[m][6]>=1&&v[m][7])
        {   small=v[m][0];
            for(int i=1;i<8;i++)
        {
            if(v[m][i]<small)
        {
            small=v[m][i];
        }

        }
            printf("%d\n",small);
        }
        else
        printf("0\n");
    }
}
