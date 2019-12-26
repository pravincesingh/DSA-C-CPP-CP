#include<iostream>
using namespace std;
/*void printPatt(int n)
{
    int k=n;
    //write your code here
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
                if(j>=0 && j<k-i)
                cout<<"*";
        }
            cout<<endl;
    }

}

void printPatt(int n)
{
    //write your code here
    int k;
        for(int i=1; i<=rows; ++i, k=0)
    {
        for(int space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }
        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}




int FindSum(int *arr,int l)
{
//Write code here
    int sum=0;
    for(int i=0;i<l;i++)
    {
        if(arr[i]%2==0||arr[i]%3==0)
            sum=sum+arr[i];
    }
    cout<<sum;
}

void printPatt(int n)
{
    for(int i=1;i<=((2*n)-1);i++)
    {
        for(int j=1;j<=((2*n)-1);j++)
        {
                if(j==i || j==(((2*n)-1))-i+1)
                {
                    cout<<i;
                }
                else
                {
                    cout<<" ";
                }
        }
            cout<<endl;
    }
}

*/



void printPatt(int n)
{
    int k=1;
    for(int i=1;i<=((2*n)-1);i++)
    {
        for(int j=1;j<=((2*n)-1);j++)
        {
                if(j==i || j==(((2*n)-1))-i+1)
                {

                    if(i<n)
                    {
                        cout<<i;
                    }
                    else if(i==n)
                    {
                        cout<<i;
                        k=i;
                    }
                    else
                    {
                        cout<<k-1;
                    }
                }

                else
                {
                    cout<<" ";
                }
                 k--;
        }
            cout<<endl;
    }
}





int main()
{
    int n=5;
    printPatt(n);
    //printPatt(n)N
    //int arr[5]={2,3,4,5,6};
    //int l=5;
    //FindSum(arr,l);
}
