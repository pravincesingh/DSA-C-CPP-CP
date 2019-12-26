#include<iostream>
using namespace std;
struct student
{
    char name[30];
    int roll_no;
    float per;
};
int main()
{
    student s[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the name of student "<<i+1<<" ";
        cin>>s[i].name;
        cout<<"Enter the roll no of student "<<i+1<<" ";
        cin>>s[i].roll_no;
        cout<<"Enter the percentage of student "<<i+1<<" ";
        cin>>s[i].per;
    }
    for(int i=0;i<2;i++)
    {
        cout<<"The data of student "<<i+1<<" is ";
        cout<<"Name="<<s[i].name<<" Roll no="<<s[i].roll_no<<" Percentage="<<s[i].per<<endl;
    }
    return 0;
}
