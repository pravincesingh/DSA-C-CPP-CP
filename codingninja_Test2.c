#include<stdio.h>

int FindSum(int *input,int size){
	// Write your code here

    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(input[i]%2==0||input[i]%3==0)
        {
            sum=sum+input[i];
        }

    }
    printf("%d",sum);
}
int main()
{
    //int l=20;
    //int arr[20]={868 ,394 ,416 ,352, 907, 19, 959, 568, 420, 692 ,114 ,872 ,489, 964, 826, 840 ,394 ,265 ,100 ,615 };
    //int l=1;
    //int arr[1]={497};
    //FindSum(arr,l);


    int sum=516;
    int nsum=0,n1;
    int temp=sum;
    while(temp>0)
    {
        n1=temp%10;
        nsum=nsum+n1;
        temp=temp/10;
    }
    printf("%d",nsum);
}
