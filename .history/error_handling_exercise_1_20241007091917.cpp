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
            cout << "This attempt was a fail. \n";
            cin.clear();
        }
        else if (cin.bad())
        {
            cout << "This is bad. \n";
            cin.clear();
        }
        else if (cin.eof())
        {
            cout << "This is the end of the file. \n";
            cin.clear();
        }

        else
        {
            cin >> dbl1;
        }
    }

    return 0;
}