#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;     // array name by default caries the address of the forst element of array, it is CONSTANT POINTER
    cout << &arr[0] << endl; // address of element at 0th
    cout << *arr << endl;    // value of element at 0th as arr automatically is the address of 0th so deferencing
    cout << arr[0] << endl;
    cout << (arr + 2) << endl;  // adds 2B(int block size) to start address meaning address of 3rd element
    cout << *(arr + 2) << endl; // deference value at (0th + 2B) = 3rd element
    return 0;
}