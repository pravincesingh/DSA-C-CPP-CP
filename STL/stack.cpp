#include<iostream>
using namespace std;
#include <stack>
#include<string.h>
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
    stack <int> s;
    s.push(input[0]);
    for(int i=1 ;i<strlen(input) ;i++ )
    {

        if(input[i]!=s.top())
        {
            s.push(input[i]);
        }

    }


    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
