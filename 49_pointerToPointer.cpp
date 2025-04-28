#include <iostream>
using namespace std;

int main()
{
    int a;
    int *ptra = &a;
    int **ptrptra = &ptra;
    cout << "Address of variable ptr: " << &ptra << endl;
    cout << "Address of variable ptr: " << ptrptra << endl;
    return 0;
}