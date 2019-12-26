#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a;
    string b;
    cin>>a;
    cin>>b;
    int la=a.size();
    int lb=b.size();
    cout<<la<<" "<<lb<<endl;
    string c=a+b;
    cout<<c<<endl;
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
    return 0;
}
