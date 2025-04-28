#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 12;
    int *ptr = &a;
    int *ptr2 = &b;
    cout << ptr << endl;
    cout << *(ptr++) << endl;
    cout << (++ptr) << endl;
    cout << (--ptr) << endl;   // (address - 1B)
    cout << (ptr + 2) << endl; // (address + 2B)
    cout << (ptr - 1) << endl;
    cout << (ptr2 - ptr) << endl; // (address a - address b = xB)
    cout << (ptr < ptr2) << endl;
    return 0;
}