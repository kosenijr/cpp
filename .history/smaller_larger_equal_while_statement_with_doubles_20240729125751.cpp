/*
Change the program so that it uses doubles instead of ints.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare one char and two ints
    char char1;
    double dbl1, dbl2;

    // set up while statement with true parameter
    while (true)
    {
        // prompt user for input
        cout << "Please enter two decimals or '|' to exit: \n";

        // set up conditions
        if (cin >> setprecision(0) >> dbl1 >> dbl2)
        {
            // add a new condition
            if (dbl1 < dbl2)
            {
                cout
                    << "The smaller value is: " << fixed << setprecision(2) << dbl1 << '\n'
                    << "The larger value is: " << fixed << setprecision(2) << dbl2 << '\n';
            }
            else if (dbl1 > dbl2)
            {
                cout
                    << "The smaller value is: " << fixed << setprecision(2) << dbl2 << '\n'
                    << "The larger value is: " << fixed << setprecision(2) << dbl1 << '\n';
            }
            else
            {
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