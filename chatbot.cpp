#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    string message;
    string favorite;
    string love;
    int pets;
    cout<<"Hey what is your name?"<<endl;
    getline(cin,name);
    cout<<"Nice to meet you, "<<name << "!"<<endl;

    cout<<"How old are you?"<<endl;
    cin>>age;
      cout<<"Cool, I am "<<age<<" too!"<<endl;

      cout<<"What is your favorite food?"<<endl;
    getline(cin,favorite);
    cout<<"I hate "<<favorite<<", I like Dhosa!"<<endl;

    cout<<"I have 2 pets . How about you?"<<endl;
    cin>>pets;
    cout<<"Nice!, Do you want to ask anything?"<<endl;
    getline(cin, love);
    cout<<"Sorry I have boyfriend . Talk you later."<<endl;
 return 0;
}
