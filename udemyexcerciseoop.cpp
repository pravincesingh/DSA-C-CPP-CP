/*Write a class for Student with
1.Roll no
2. name
3. Marks of 3 subject
Function for
Total marks
Grade
And required menthod */
#include<iostream>
using namespace std;

class Student
{
    private:
    int roll_no;
    string name;
    int mar1,mar2,mar3;
    public:
        int getRollno()
        {
            return roll_no;
        }
        string getName()
        {
            return name;
        }
        int getMar1()
        {
            return mar1;
        }
        int getMar2()
        {
            return mar2;
        }
        int getMar3()
        {
            return mar3;
        }
        void setRollno(int r)
        {
            roll_no=r;
        }
        void setName(string n)
        {
            name=n;
        }
        int setMar1(int m1)
        {
            mar1=m1;
        }
        int setMar2(int m2)
        {
            mar2=m2;
        }
        int setMar3(int m3)
        {
            mar3=m3;
        }
        int total_marks(int mar1,int mar2,int mar3)
        {
            return mar1+mar2+mar3;
        }
        string grade(int mar1,int mar2,int mar3)
        {
            int total=mar1+mar2+mar3;
            int percentage=total/3;
            if(percentage>=60)
                return "A";
            else if (percentage>=40)
                return "B";
            else if((percentage<40&&percentage>=0)
                    return "C"
        }

};
