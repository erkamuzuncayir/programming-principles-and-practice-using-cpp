//
// Created by erkam on 10/25/23.
//
// Chapter 3 - Exercise 6

#include "./std_lib_facilities.h"

int main()
{
    cout << "Please enter three integer values for ordering ascending:\n";
    int val1;
    cin >> val1;
    int val2;
    cin >> val2;
    int val3;
    cin >> val3;

    if(val1 < val2)
    {
        if(val3 < val1)
            cout << val3 << ", " << val1 << ", " << val2 << "\n";
        else if(val3 < val2)
            cout << val1 << ", " << val3 << ", " << val2 << "\n";
        else
            cout << val1 << ", " << val2 << ", " << val3 << "\n";
    }
    else if(val3 < val2)
    {
        cout << val3 << ", " << val2 << ", " << val1 << "\n";
    }
    else if(val3 < val1)
        cout << val2 << ", " << val3 << ", " << val1 << "\n";
    else
        cout << val2 << ", " << val1 << ", " << val3 << "\n";
}
