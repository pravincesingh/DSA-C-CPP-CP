/*
Keep track of guest(children) at a small birthday party
Simple purpost: logistics for catering and party favors
We are intrested in the following information per child:
    Name
    Gender
    Age
*/

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<list>

using namespace std;

#define USE_VECTOR
//#define USE_LIST

class guest{
public:
    guest(){}
    ~guest(){}
    void set_gender(string in)
    {
        char i = in.c_str()[0];
        if(i=='b' || i=='B' || i=='m' || i=='M')
            gender="Boy";
        else
            gender="Girl"
    }
    string name;
    string gender;
    int age;
};

#ifdef USE_VECTOR
    typedef vector<guest> my_container;
#elif defined USE_LIST
    typedef list<guest> my_container;
#endif
