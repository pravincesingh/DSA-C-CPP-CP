#include<iostream>
using namespace std;

int Partition(int *A , int start , int end)
{
    int pivot= A[end];
    int partitionIndex = start;
    for(int i = start ; i<end ; i++)
    {
      if(A[i]<=pivot)
      {
        swap(A[i], A[partitionIndex]);
        partitionIndex++;
      }
    }
    swap(A[partitionIndex],A[end]);
    return partitionIndex;
}

void QuickSort(int *A , int start , int end)
{
    if(start < end)
    {
        int partitionIndex = Partition(A,start , end);
        QuickSort(A,start , partitionIndex-1);
        QuickSort(A, partitionIndex+1 , end);
    }
}

int main()
{
    int A[]={7,6,10,4,3,2,1,0,54,3,3,3,5,5,67,7,4,5,6,8,5};

    QuickSort(A,0,20);

    for(int i=0;i<21;i++)
        cout<<A[i]<<" ";
}
