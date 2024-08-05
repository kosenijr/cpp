/*
Change the program so that it writes out the numbers are almost
equal after writing out which is the larger and the smaller if the two
numbers differ by less than 1.0/100.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare one char and two ints
    char char1;
    double dbl1, dbl2; // changed to read just one double
    int int1;

    // set up while statement with true parameter
    while (true)
    {
        // prompt user for input
        cout << "Please enter two decimals or '|' to exit: \n";

        // set up conditions
        if (cin >> dbl1 >> int1)
        {
            // transfer int to dbl
            dbl2 = int1;
            // add a new condition
            if (dbl1 < dbl2)
            {
                cout
                    << "The smaller value is: " << fixed << setprecision(0) << dbl1 << '\n'
                    << "The larger value is: " << fixed << setprecision(0) << dbl2 << '\n';
            }
            else if (dbl1 > dbl2)
            {
                cout
                    << "The smaller value is: " << fixed << setprecision(0) << dbl2 << '\n'
                    << "The larger value is: " << fixed << setprecision(0) << dbl1 << '\n';
            }
            else
            {
                cout << "The numbers are equal. \n";
            };

            if (fabs(dbl1 - dbl2) < (1.0/100)) {
                cout << "The numbers are almost equal. \n";
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
            }
        }
    };
    // return statement
    return 0;
}

/*
use fabs for floating points
*/