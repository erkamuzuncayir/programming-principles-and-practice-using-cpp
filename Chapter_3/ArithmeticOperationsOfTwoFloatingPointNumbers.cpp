//
// Created by erkam on 10/25/23.
//
// Chapter 3 - Exercise 6

#include "./std_lib_facilities.h"

int main()
{
    cout << "Please enter two values for arithmetic operations:\n";
    double val1;
    cin >> val1;
    double val2;
    cin >> val2;

    double differenceOfTwoValues;
    if(val1 < val2)
    {
        cout << val1 << " is smaller than " << val2 << "\n";
        cout << val2 << " is bigger than " << val1 << "\n";
        differenceOfTwoValues = val2 - val1;
    }
    else
    {
        cout << val2 << " is smaller than " << val1 << "\n";
        cout << val1 << " is bigger than " << val2 << "\n";
        differenceOfTwoValues = val1 - val2;
    }

    double sumOfTwoValues = val1 + val2;
    cout << "Sum of two values is " << sumOfTwoValues << "\n";

    cout << "Difference of two values is " << differenceOfTwoValues << "\n";

    double productOfTwoValues = val1 * val2;
    cout << "Product of two values is " << productOfTwoValues << "\n";

    double ratioOfVal1ToVal2 = val1 / val2;
    cout << "Ratio of first value to second value is " << ratioOfVal1ToVal2 << "\n";


    double ratioOfVal2ToVal1 = (double)val2 / (double)val1;
    cout << "Ratio of second value to first value is " << ratioOfVal2ToVal1 << "\n";
}