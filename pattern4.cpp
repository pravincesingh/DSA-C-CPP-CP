#include<iostream>
using namespace std;
void printPatt(int n)
{
    //write your code here
    int k=1;
    int l=n;
    for(int i=0;i<n ;i++)
    {

        for(int j=l ; j>0;j--)
        {
            cout<<k%2;
        }
        cout<<endl;
        k++;
        l--;
    }
}
int main()
{
    printPatt(8);

}
