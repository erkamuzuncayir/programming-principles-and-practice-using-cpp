//
// Created by erkam on 10/25/23.
//
// Chapter 3 - Exercise 8

#include "./std_lib_facilities.h"

int main()
{
    cout << "Please enter an integer value to figure out if it's odd or even:\n";
    int value;
    cin >> value;

    if(value % 2 < 1)
        cout << "The value " << value << " is an even number.\n";
    else
        cout << "The value " << value << " is an odd number.\n";
}