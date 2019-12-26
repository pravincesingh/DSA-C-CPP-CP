#include<iostream>
using namespace std;
int main()
{
    //Numbers from 1 to 49
    //Choose a subset of 6 numbers
    //Brute force approach
    //Time complexity is n^6 (if we use recursion time complexity will be 2^6)
    int z=0;
    int arr[]={1,2,4,5,6,7,8,10,12};
    int n= sizeof(arr)/sizeof(arr[0]); // it will give 9

    for(int i=1;i<n-5;i++)
        for(int j=i+1;j<n-4;j++)
            for(int k=j+1;k<n-3;k++)
                for(int l=k+1;l<n-2;l++)
                    for(int m=l+1;m<n-1;m++)
                        for(int o=m+1;o<n;o++){
                            cout<<arr[i]<<" "<< arr[j]<<" "<<arr[k] <<" "<<arr[l] <<" " <<arr[m] <<" "<<arr[o]<<"\n";
                            cout<<++z<<endl;
                        }
}
