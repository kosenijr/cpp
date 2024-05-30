#include "std_lib_facilities.h"

int main()
{
    // variables
    // declare the three objects
    string str1, str2, str3;
    // string strTest = "Hey";
    // char letter = tolower(strTest[0]); // returns a numeric position if not stored in a char object.

    // prompt the user the three strings
    cout << "Please enter three string values: \n";
    // read user input into the objects
    cin >> str1 >> str2 >> str3;
    // grab the first letters and make lowercase
    char char1 = tolower(str1[0]);
    char char2 = tolower(str2[0]);
    char char3 = tolower(str3[0]);

    // Strings: Abel, Charles, Travis
    bool compare1 = char1 < char2; // should be true.
    bool compare2 = char2 > char3; // should be false.

    // testing
    // cout << char1 << ", " << char2 << ", " << char3 << "\n";
    // compare
    // cout << compare1 << " " << compare2 << "\n";

    // conditionals
    // if ((char1 <= char2) && (char1 <= char3) && (char2 <= char3))
    // {
    //     cout << char1 << ", " << char2 << ", " << char3 << "\n";
    // }
    // else if ((char1 <= char2) && (char1 <= char3) && (char3 <= char2))
    // {
    //     cout << char1 << ", " << char3 << ", " << char2 << "\n";
    // }
    // else if ((char2 <= char1) && (char2 <= char3) && (char1 <= char3))
    // {
    //     cout << char2 << ", " << char1 << ", " << char3 << "\n";
    // }
    // else if ((char2 <= char1) && (char2 <= char3) && (char3 <= char1))
    // {
    //     cout << char2 << ", " << char3 << ", " << char1 << "\n";
    // }
    // else if ((char3 <= char1) && (char3 <= char2) && (char1 <= char2))
    // {
    //     cout << char3 << ", " << char1 << ", " << char2 << "\n";
    // }
    // else if ((char3 <= char1) && (char3 <= char2) && (char2 <= char1))
    // {
    //     cout << char3 << ", " << char2 << ", " << char1 << "\n";
    // };
    return 0;
}
