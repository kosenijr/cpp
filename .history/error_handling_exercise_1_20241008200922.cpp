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
    }
    if (cin >> dbl1)
    {

        // display standard output stream
        cout
            << "You entered: " << fixed << setprecision(1) << dbl1 << '\n';
    };
    if (!cin)
    {
        cin.clear();
        cin >> char1;
        if (char1 == '|')
        {
            break;
        }
        else
        {
            cout << "Please try another character. \n";
            continue;
        }
        break;
    }

    return 0;
}