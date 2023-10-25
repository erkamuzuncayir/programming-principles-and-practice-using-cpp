//
// Created by erkam on 10/25/23.
//
// Chapter 3 - Exercise 2

#include "./std_lib_facilities.h"

int main()
{
    cout << "Please enter a distance as a mile to convert to kilometer:\n";
    double distanceMileToConvert;
    cin >> distanceMileToConvert;
    double convertedKilometerDistance = distanceMileToConvert * 1.609;
    cout << distanceMileToConvert << " miles equals to " << convertedKilometerDistance << " kilometers.\n";
}