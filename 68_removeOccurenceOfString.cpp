#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// 0(n)
string removeOccurence(string str, string removeStr)
{
    string s;
    while (str.length() > 0 && str.find(removeStr) < str.length())
    {
        str.erase(str.find(removeStr), removeStr.length());
    }
    return str;
}

int main()
{
    string str, rem;
    cout << "Enter string: ";
    cin >> str;
    cout << "Enter search string: ";
    cin >> rem;
    cout << removeOccurence(str, rem);
    return 0;
}