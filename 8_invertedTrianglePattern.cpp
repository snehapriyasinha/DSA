#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // inverted triangle pattern
    // 111
    // 22
    // 3
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i + 1; j--)
        {

            cout << i + 1;
        }
        cout << endl;
    }

    // inverted triangle pattern
    // 111
    //  22
    //   3
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++) // firat all spaces of a linespace
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) // then all elements
        {
            cout << i + 1;
        }
        cout << endl;
    }

    // inverted triangle pattern DIFFERENT LOOP APPROACH
    // 111
    // 22
    // 3
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}