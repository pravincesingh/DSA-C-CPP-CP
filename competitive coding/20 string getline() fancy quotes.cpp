#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int T;cin>>T;
    string dummy;
    getline(cin,dummy);
    fflush(stdout);
    while(T--)
    {
        string s;
        getline(cin,s);

        stringstream str(s);
        string word;
        int temp=0;
        while(str>>word)
        {
            if(word=="not")
                temp=1;
        }
        if(temp==1)
            cout<<"Real Fancy\n";
        else
            cout<<"regularly fancy\n";

    }


    return 0;
}
