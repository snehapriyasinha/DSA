#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string st)
{
    string s = st;
    reverse(st.begin(), st.end());
    if (s == st)
    {
        return true;
    }
    return false;
}

void getAllPalindromes(string s, vector<string> &part, vector<vector<string>> &ans)
{
    if (s.size() == 0)
    {
        ans.push_back(part);
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        string leftPart = s.substr(0, i + 1); // each time we take from 0 to the then i as left part
        if (isPalindrome(leftPart))
        {                             // and check if left side is palindromic if so then further recursively check for right side else make a different left part longer
            part.push_back(leftPart); // put the palindromic left to this individual set of palindromes
            string rightPart = s.substr(i + 1);
            getAllPalindromes(rightPart, part, ans);
            part.pop_back();
        }
    }
}

int main()
{
    vector<vector<string>> ans; // to store all possible sets
    vector<string> part;        // for individual possible palindrome set
    string st;
    cout << "Enter a string: ";
    cin >> st;
    getAllPalindromes(st, part, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}