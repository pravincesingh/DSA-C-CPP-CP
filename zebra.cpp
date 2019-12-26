#include<iostream>
using namespace std;
int main()
{
    char str[10];
    cout<<"Enter zebra :";
    cin>>str;
    for(int i=0 ;i<5;i++)
    {
        if(str[i]=='z')
        {
            cout<<"!!!";
        }
        else if(str[i]=='a')
        {
            cout<<"@@";
        }
        else if(str[i]=='r')
        {
            cout<<"$";
        }
        else{
            cout<<str[i];
        }
    }
}
