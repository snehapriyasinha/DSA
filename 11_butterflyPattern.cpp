#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // butterfly pattern
    //*      *
    //**    **
    //***  ***
    //********
    //********
    //***  ***
    //**    **
    //*      *

    // top
    //*      *
    //**    **
    //***  ***
    //********
    for (int i = 0; i < n; i++)
    {
        // top left
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // top right
        for (int j = 0; j <= 2 * (n - i) - 3; j++) // even spaces in terms of n, 1 -> 2*(n-i)-3 for line1 2(4-0)-2=6 spaces
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // bottom pattern
    //********
    //***  ***
    //**    **
    //*      *
    for (int i = 0; i < n; i++)
    {
        // bottom left
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // bottom right
        for (int j = 0; j < 2 * i; j++) // even spaces of the form 0,2,4,6 hence i=0,1,2,3 ->2*i =0,2,4,6
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// finally something good happened today i did this butterfly pattern else today was a terrible day all marks and SIH everything was disappointing