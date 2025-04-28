#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // diamond pattern
    //     *
    //    * *
    //   *   *
    //  *     *
    //   *   *
    //    * *
    //     *

    // top
    //     *
    //    * *
    //   *   *
    //  *     *
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) // left pattern -> side space and then *
        {
            cout << " ";
        }

        cout << "*";
        if (i != 0) // for first element no need of side space star logic
        {
            for (int j = 0; j < 2 * i - 1; j++) // right patern ->middle space and side *
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }
    // bottom
    //    *   *
    //     * *
    //      *
    for (int i = 0; i < n - 1; i++) // for left pattern -> first left space then *
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        cout << "*";
        if (i != n - 2) // for last element no need of side space star logic
        {
            //// right patern -> middle space and side *
            for (int j = 0; j < 2 * (n - i) - 5; j++) // derive logic of odd spaces in terms of i and n
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }
    return 0;
}