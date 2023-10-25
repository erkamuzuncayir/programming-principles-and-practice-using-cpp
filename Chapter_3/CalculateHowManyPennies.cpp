//
// Created by erkam on 10/25/23.
//
// Chapter 3 - Exercise 11

#include "./std_lib_facilities.h"

int main()
{
    cout << "How many pennies do you have?\n";
    int pennies;
    cin >> pennies;
    cout << "How many nickels do you have?\n";
    int nickels;
    cin >> nickels;
    cout << "How many dimes do you have?\n";
    int dimes;
    cin >> dimes;
    cout << "How many quarters do you have?\n";
    int quarters;
    cin >> quarters;
    cout << "How many half dollars do you have?\n";
    int halfDollars;
    cin >> halfDollars;
    cout << "How many one-dollar coins do you have?\n";
    int oneDollarCoins;
    cin >> oneDollarCoins;

    if(pennies < 2)
        cout << "You have " << pennies << " penny.\n";
    else
        cout << "You have " << pennies << " pennies.\n";

    if(nickels < 2)
        cout << "You have " << nickels << " nickel.\n";
    else
        cout << "You have " << nickels << " nickels.\n";

    if(dimes < 2)
        cout << "You have " << dimes << " dime.\n";
    else
        cout << "You have " << dimes << " dimes.\n";

    if(quarters < 2)
        cout << "You have " << quarters << " quarter.\n";
    else
        cout << "You have " << quarters << " quarters.\n";

    if(halfDollars < 2)
        cout << "You have " << halfDollars << " half dollar.\n";
    else
        cout << "You have " << halfDollars << " half dollars.\n";

    if(oneDollarCoins < 2)
        cout << "You have " << oneDollarCoins << " one dollar coin.\n";
    else
        cout << "You have " << oneDollarCoins << " one dollar coins.\n";

    int totalValue = pennies + nickels * 5 + dimes * 10 + quarters * 25 + halfDollars * 50 + oneDollarCoins * 100;
    cout << "The value of all of your coins is " << totalValue << " cents.\n";
}