#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // number square patter
    // 123
    // 123
    // 123
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    // character square print
    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = 'a';
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