#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2};
    cout << "Size: " << vec.size() << endl;
    vec.push_back(3);
    vec.push_back(4);
    vec.pop_back();
    cout << "Front: " << vec.front() << endl;
    cout << "Back: " << vec.back() << endl;
    cout << "At: " << vec.at(1) << endl;

    cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}