#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// 0(n)
bool palindromeChecker(string str)
{
    string str2 = str;
    reverse(str.begin(), str.end());
    if (str2 == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool validPalindrome(string str)
{
    string s = "";
    for (int i = 0; i <= str.length() - 1; i++)
    {
        char c = islower(str[i]);
        if (isalpha(c) || isdigit(c))
        {
            s += c;
        }
    }
    return palindromeChecker(s);
}

int main()
{
    string str;
    cin >> str;
    cout << palindromeChecker(str);
    cout << endl;
    cout << validPalindrome(str);
    return 0;
}