//
// Created by erkam on 10/25/23.
//
// Chapter 3 - Exercise 9

#include "./std_lib_facilities.h"

int main()
{
    cout << "Please enter a digit as a string from zero to four to convert integer corresponds:\n";
    string digitStr;
    cin >> digitStr;
    int numberCorrespond = -1;

    if(digitStr == "zero")
    {
        numberCorrespond = 0;
        cout << "Digit correspond of your input is " << numberCorrespond << "\n";
    }
    else if(digitStr == "one")
    {
        numberCorrespond = 1;
        cout << "Digit correspond of your input is " << numberCorrespond << "\n";
    }
    else if(digitStr == "two")
    {
        numberCorrespond = 2;
        cout << "Digit correspond of your input is " << numberCorrespond << "\n";
    }
    else if(digitStr == "three")
    {
        numberCorrespond = 3;
        cout << "Digit correspond of your input is " << numberCorrespond << "\n";
    }
    else if(digitStr == "four")
    {
        numberCorrespond = 4;
        cout << "Digit correspond of your input is " << numberCorrespond << "\n";
    }
    else
    {
        cout << "Computer doesn't now digit correspond of " << digitStr << " :')\n";
    }
}