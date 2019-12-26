
#include<iostream>
using namespace std;

int main()
{
    int A,B;
    char C;
    cin>>A;
    cin>>B;
    cin>>C;
    if(C=='+')
        cout<<A+B;
    else if (C=='-')
        cout<<A-B;
    else if(C=='*')
        cout<<A*B;
    else if(C=='/')
    {
        float D=A;
        float E=B;
        cout<<D/E;
    }
    return 0;

}
