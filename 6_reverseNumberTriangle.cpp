#include <iostream>
using namespace std;

int main()
{
    // for continued series print out using a new variable not i,j,etc
    int n = 5;

    // number square continue pattern
    // 1
    // 21
    // 321
    // 4321  
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j >= 1; j--) // each line has n elements
        {

            cout << j;
        }
        cout << endl;
    }

    return 0;
}