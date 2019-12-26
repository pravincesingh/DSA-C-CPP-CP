#include<iostream>
using namespace std;

int main()
{
    int sum=0,no;
   // int arr[100];
    cout<<"Enter no of elements :";
    cin>>no;
   int arr[no];
    cout<<"Enter elements :";
    for(int i=0;i<no ;i++)
    {
        cin>>arr[i];
         sum=sum+arr[i];
    }
        int avg=sum/no;
        cout<<"The avg of the elements is :"<<avg;
}
