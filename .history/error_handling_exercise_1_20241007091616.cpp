#include "std_lib_facilities.h"

int main()
{
    // declare objects
    char char1;
    // initialize objects
    double dbl1;

    // while-statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter a decimal or '|' to exit \n";
        // read into dbl1 via condition
        // Will attempt error first before double in condition
        if (cin.fail())
        {
            cin.clear;
        }
        else
        {
            cin >> dbl1;
        };

        return 0;
    }