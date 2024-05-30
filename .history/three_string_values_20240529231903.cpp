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

    // testing
    // cout << char1 << ", " << char2 << ", " << char3 << "\n";
    // compare
    cout << char1 < char2  << char3 < char2 << "\n";

    // conditionals
    // if ((str1 <= str2) && (str1 <= str3) && (str2 <= str3))
    // {
    //     cout << str1 << ", " << str2 << ", " << str3 << "\n";
    // }
    // else if ((str1 <= str2) && (str1 <= str3) && (str3 <= str2))
    // {
    //     cout << str1 << ", " << str3 << ", " << str2 << "\n";
    // }
    // else if ((str2 <= str1) && (str2 <= str3) && (str1 <= str3))
    // {
    //     cout << str2 << ", " << str1 << ", " << str3 << "\n";
    // }
    // else if ((str2 <= str1) && (str2 <= str3) && (str3 <= str1))
    // {
    //     cout << str2 << ", " << str3 << ", " << str1 << "\n";
    // }
    // else if ((str3 <= str1) && (str3 <= str2) && (str1 <= str2))
    // {
    //     cout << str3 << ", " << str1 << ", " << str2 << "\n";
    // }
    // else if ((str3 <= str1) && (str3 <= str2) && (str2 <= str1))
    // {
    //     cout << str3 << ", " << str2 << ", " << str1 << "\n";
    // };
    return 0;
}
