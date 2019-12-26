#include<iostream>
using namespace std;
int maxOne(int **arr,int n,int m)
{
//Write code here
    int arr2[n],i,j,k;
    for(int i=0;i<=n;i++)
    {
        int n1=0;
        for(int i=0;i<=m;i++)
        {
            if(*arr[i]==1)
            {
             	n1++;
            }
            arr2[i]=n1;
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr2[i]<<" ";
    }
}

int main()
{
        int n=2;
    int m=2;
    int arr[n][m]=[0,1,1,1];

    maxOne(arr,n,m);

}
