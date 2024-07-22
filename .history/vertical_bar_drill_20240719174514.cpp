#include "std_lib_facilities.h"

int main()
{
    // declare two ints
    int num1, num2;
    // while statement
    while (true)
    {
        cout << "Please enter two integers: \n";
        cin >> num1 >> num2;
        // stringify entry
        string <int> str1 = num1;
        string <int> str2 = num2;
        cout << str1 << " " << str2 << '\n';
    }
    return 0;
}