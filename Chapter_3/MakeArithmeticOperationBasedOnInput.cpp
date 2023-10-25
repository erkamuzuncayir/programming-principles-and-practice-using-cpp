//
// Created by erkam on 10/25/23.
//
// Chapter 3 - Exercise 10

#include "./std_lib_facilities.h"

int main()
{
    cout << "Please enter desired operation and operands:\n";
    char operation;
    cin >> operation;
    int val1;
    cin >> val1;
    int val2;
    cin >> val2;

    if(operation == '+')
    {
        int sum = val1 + val2;
        cout << "Result of operation is " << sum << "\n";
    }
    else if(operation == '-')
    {
        int difference = val1 - val2;
        cout << "Result of operation is " << difference << "\n";
    }
    else if(operation == '*')
    {
        int product = val1 * val2;
        cout << "Result of operation is " << product << "\n";
    }
    else if(operation == '/')
    {
        int ratio = val1 / val2;
        cout << "Result of operation is " << ratio << "\n";
    }
}