#include <iostream>
using namespace std;

int main()
{
    int a;
    int *ptr = &a;
    cout << "Address of variable a: " << &a << endl;
    cout << "Address of variable a: " << ptr << endl;
    cout << "Address of variable ptr: " << &ptr << endl;
    return 0;
}