
// CPP for constructing smallest palindrome
#include <bits/stdc++.h>
using namespace std;

// function for printing palindrome
string constructPalin(string str, int len)
{
    int i = 0, j = len - 1;

    // iterate till i<j
    for (; i < j; i++, j--) {

        // continue if str[i]==str[j]
        if (str[i] == str[j] && str[i] != '*')
            continue;

        // update str[i]=str[j]='a' if both are '*'
        else if (str[i] == str[j] && str[i] == '*') {
            str[i] = 'a';
            str[j] = 'a';
            continue;
        }

        // update str[i]=str[j] if only str[i]='*'
        else if (str[i] == '*') {
            str[i] = str[j];
            continue;
        }

        // update str[j]=str[i] if only str[j]='*'
        else if (str[j] == '*') {
            str[j] = str[i];
            continue;
        }

        // else print not possible and return
        cout << "Not Possible";
        return "";
    }
    return str;
}

// driver program
int main()
{
    string str = "bca*xc**b";
    int len = str.size();
    cout << constructPalin(str, len);
    return 0;
}
