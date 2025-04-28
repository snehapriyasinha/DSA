#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int *ptr2 = NULL;
    cout << "Pointer with garbage address: " << ptr << endl
         << "Null Pointer: " << ptr2;
    // used in linked list etc to check if a memory is alloacted or not
    return 0;
}