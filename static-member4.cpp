#include<iostream>
using namespace std;

class student
{
public:
    int roll;
    string name;
    static int addNo;
    student(string n)
    {
        addNo++;
        roll=addNo;
        name=n;
    }
    void display()
    {
        cout<<"Nmae "<<name<<endl<<"Roll "<<roll<<endl;
    }
};
int student::addNo=0;
int main()
{
    student s1("John");
    student s2("Ravi");
    student s3("khan");
    student s4("Ram");
    student s5("Rocky");
    student s6("Raj");

    s1.display();
    s6.display();
    cout<<"Number Admission "<<student::addNo<<endl;
}
