#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string reverseStr(string str)
{
    string s;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        s = s + str[i];
    }
    return s;
}

int main()
{
    string str;
    getline(cin, str);

    // user defined function
    cout << reverseStr(str);

    // function
    reverse(str.begin(), str.end());
    cout << endl
         << str << endl;

    char ch[] = {'s', 'n', 'e', 'h', 'a', '\0'};
    // character array reverse function
    for (int i = strlen(ch) - 1; i >= 0; i--)
    {
        cout << ch[i];
    }

    return 0;
}