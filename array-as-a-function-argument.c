#include<stdio.h>

int sumOfArray(int Array[],int size)  // int Array[] is same as int *A
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+Array[i];
    }
    return sum;
}
int main()
{
    int a[]={9,4,6,3,6,2};
        int size=sizeof(a) /sizeof(a[0]);
        //sizeOfArray==No of element in the array.
        //sizeof(a) == total size of array in bytes.
        //sizeof(a[0] == size of one element in byte which is 4 in our compiler.
        int sum=sumOfArray(a,size);
printf("%d",sum);
}
