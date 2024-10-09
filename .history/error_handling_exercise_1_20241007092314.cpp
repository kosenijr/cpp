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
        if (!cin && cin.fail())
        {

            cout << "This is the end of the file. \n";
            cin.clear();
        }

        else
        {
            cin >> dbl1;
            // display standard output stream
            cout << "You entered: " << dbl1 << '\n';
        }
    }

    return 0;
}