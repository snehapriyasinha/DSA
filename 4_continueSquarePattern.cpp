#include <iostream>
using namespace std;

int main()
{
    // for continued series print out using a new variable not i,j,etc
    int n = 5;

    // number square continue pattern
    // 123
    // 456
    // 789
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) // each line has n elements
        {
            {
                cout << num; // j is not printed because j always will initialize with 0 and we need a series continued
                num++;       // to follow a continued number series
            }
            cout << endl;
        }

        // character square continue print
        // abc
        // def
        // ghi
        char ch = 'a';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ch << " ";
                ch++;
                // in c++ character is first converted to ascii internally, therefore ch++ = int(ch)++ = 97++ = 98 at the time of rendering it to screen it takes its datatype form implicitly i.e.  char(98) = b
            }
            cout << endl;
        }

        return 0;
    }