
#include<iostream>
using namespace std;
int main()
{
	void bio(char[],int);
	char name[10];
	int i;
	cout<<"enter name : ";
	cin>>name;
	cout<<"enter phone num : ";
	cin>>i;
	bio(name,i);
}
void bio(char name[],int i)
{
	cout<<"Your name is :"<<name<<endl;
	cout<<"Phone Num :"<<i;
}
