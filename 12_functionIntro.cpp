#include <iostream>
using namespace std;

// mininum of two numbers
int min(int num1, int num2)
{
    return (num1 < num2) ? num1 : num2;
}

int main()
{
    int a, b;
    cout << "Enter a and b: " << endl;
    cin >> a >> b;
    cout << "Mininum of " << a << " and " << b << " = " << min(a, b) << endl;
}