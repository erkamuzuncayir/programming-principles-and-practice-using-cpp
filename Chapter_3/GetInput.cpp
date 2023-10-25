//
// Created by erkam on 10/17/23.
//
// Chapter 3 - Drills

#include "./std_lib_facilities.h"

int main()
{
    // Drill 1
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string firstName;
    cin >> firstName;

    // Drill 2
    cout << "Dear " << firstName << ", how are you? I hope your study about C++ is going well.\n" << "I want to hear more about your journey.\n";

    // Drill 3
    cout << "But before I want to ask you something. " << "What is the name of your closest friend?\n";
    string friendName;
    cin >> friendName;
    cout << "Have you seen " + friendName + " lately?";

    // Drill 4
    char friendSex = 0;
    cout << "If your friend female please write f, otherwise write m:\n";
    cin >> friendSex;
    if(friendSex == 'm')
        cout << "If you see " + friendName + " please ask him to call me.\n";
    else if(friendSex == 'f')
        cout << "If you see " + friendName + " please ask her to call me.\n";

    cout << "By the way, how old are you?\n";
    int age;
    cin >> age;

    // Drill 5
//    if(age > 0 && age < 110)
//      cout << "I hear you just had a birthday and you are " << age << " years old.";
//    else
//      simple_error("you're kidding!");

    // Drill 6
    if(age < 0 || age > 110)
        simple_error("you're kidding!\n");
    else if(age == 17)
        cout << "Next year you will be able to vote.\n";
    else if(age < 12)
        cout << "Next year you will be " << age + 1 << "\n";
    else if(age > 70)
        cout << "I hope you are enjoying retirement.\n";
    else
        cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    // Drill 7
    cout << "Yours sincerely,\n\n" + firstName + "\n";
}