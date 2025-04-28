#include <iostream>
using namespace std;

int main()
{
    // square star pattern
    //***
    //***
    //***
    int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "******" << endl;
    // }
    // OR
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}