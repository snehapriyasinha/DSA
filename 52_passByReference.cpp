#include <iostream>
using namespace std;

void changeA(int a)
{
    a = 20;
}

void changeAPointer(int *ptr)
{
    *ptr = 20;
}

void changeAAlias(int &a)
{
    a = 30;
}

int main()
{
    int a = 10;
    cout << a << endl;
    changeA(a);
    cout << a << endl;
    changeAPointer(&a);
    cout << a << endl;
    changeAAlias(a);
    cout << a << endl;
    return 0;
}