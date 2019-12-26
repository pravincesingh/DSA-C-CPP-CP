#include<iostream>
using namespace std;

int main()
{
    float a ,b ;cin>>a>>b;
    char c ;cin>>c;

    if(c=='+')
        cout<<a+b<<endl;
    else if(c=='-')
        cout<<a-b<<endl;
    else if(c=='*')
        cout<<a*b<<endl;
    else if(c=='/'){
        float d=float(a/b);
        cout<<d<<endl;
    }

    return 0;
}
