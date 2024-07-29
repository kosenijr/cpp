/*
Change the program to write out the smaller value is: followed by
the smaller of the numbers and the larger value is: followed by the
larger value.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare one char and two ints
    char char1;
    double deci1, deci2;

    // set up while statement with true parameter
    while (true)
    {
        // prompt user for input
        cout << "Please enter two decimals or '|' to exit: \n";

        // set up conditions
        if (cin >> deci1 >> deci2)
        {
            // add a new condition
            if (deci1 < deci2)
            {
                cout
                    << "The smaller value is: " << deci1 << '\n'
                    << "The larger value is: " << deci2 << '\n';
            }
            else if (deci1 > deci2)
            {
                cout
                    << "The smaller value is: " << deci2 << '\n'
                    << "The larger value is: " << deci1 << '\n';
            } else {
                cout << "The numbers are equal. \n";
            };
        }
        else
        {
            // clear out the standard output stream
            cin.clear();
            // redirect input to char
            cin >> char1;
            // set up inner condition
            if (char1 == '|')
            {
                break;
            }
            else
            {
                cout << "Incorrect input. \n";
            };
        };
    };
    // return statement
    return 0;
}