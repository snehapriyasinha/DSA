#include <iostream>
using namespace std;

int main()
{
    // for continued series print out using a new variable not i,j,etc
    int n = 4;

    // number triangle continue pattern
    // 1
    // 23
    // 456

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j >= 1; j--) // each line has n elements
        {

            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}