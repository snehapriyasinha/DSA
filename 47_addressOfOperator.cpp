#include <iostream>
using namespace std;

int main()
{
    int a;
    char ch = 'a';
    cout << "Address of variable a: " << &a << endl
         << "Address of variable ch: " << &ch;//some fault
    return 0;
}