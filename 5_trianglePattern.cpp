#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // star triangle pattern
    //*
    //**
    //***
    for (int i = 0; i < n; i++) // for number of lines
    {
        for (int j = 0; j <= i; j++) // each line has many elements as the line no.
        {
            cout << "*";
        }
        cout << endl;
    }

    // number triangle pattern
    // 1
    // 22
    // 333
    for (int i = 0; i < n; i++) // for number of lines
    {
        for (int j = 0; j <= i; j++) // each line has many elements as the line no.
        {
            cout << i + 1;
        }
        cout << endl;
    }

    // 1
    // 12
    // 123
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }

    return 0;
}