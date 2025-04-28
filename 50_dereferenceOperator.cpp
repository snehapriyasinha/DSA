#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int *ptra = &a;
    int **ptrptra = &ptra;
    cout << "Value of a: " << *(&a) << endl;
    cout << "Value at ptra address: " << *ptra << endl;
    cout << "Value at address of ptra address: " << **ptrptra << endl;
    return 0;
}