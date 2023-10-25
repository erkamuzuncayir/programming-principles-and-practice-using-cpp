//
// Created by erkam on 10/25/23.
//
// Chapter 3 - Exercise 7

#include "./std_lib_facilities.h"

int main()
{
    cout << "Please enter three strings for ordering ascending:\n";
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    string str3;
    cin >> str3;

    if(str1 < str2)
    {
        if(str3 < str1)
            cout << str3 << ", " << str1 << ", " << str2 << "\n";
        else if(str3 < str2)
            cout << str1 << ", " << str3 << ", " << str2 << "\n";
        else
            cout << str1 << ", " << str2 << ", " << str3 << "\n";
    }
    else if(str3 < str2)
    {
        cout << str3 << ", " << str2 << ", " << str1 << "\n";
    }
    else if(str3 < str1)
        cout << str2 << ", " << str3 << ", " << str1 << "\n";
    else
        cout << str2 << ", " << str1 << ", " << str3 << "\n";
}
