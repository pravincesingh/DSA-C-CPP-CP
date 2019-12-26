#include<iostream>

using namespace std;

int main()

{

	void bio(char[],char[],int,int);

	char name[50];

	char fathername[50];

	int Cnic;

	int phonenum;

	cout<<"enter name : ";

	cin>>name;

	cout<<"enter father name : ";

	cin>>fathername;

	cout<<"enter cnic # : ";

	cin>>Cnic;

	cout<<"enter phone num : ";

	cin>>phonenum;

    bio(name,fathername,phonenum,Cnic);//function call

}

void bio(char x[],char y[],int z,int c)

{

	cout<<"Your name is :"<<x<<endl;

	cout<<"Your fathername is :"<<y<<endl;
	cout<<"Your phone num is :"<<z<<endl;
	cout<<"Your cnic is :"<<c<<endl;





}
