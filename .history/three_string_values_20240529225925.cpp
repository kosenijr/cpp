#include "std_lib_facilities.h"

int main()
{
    // variables
    // declare the three objects
    int str1, str2, str3;
    int strTest = "Hey";
    // prompt the user the three strings
    cout << "Please enter three string values: \n";
    // read user input into the objects
    cin >> str1 >> str2 >> str3;
    

    // testing
    cout << strTest << "\n";

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
