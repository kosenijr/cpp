/*
Augment the program so that it writes the line the numbers are
equal (only) if they are equal.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare one char and two ints
    char char1;
    int int1, int2;

    // set up while statement with true parameter
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers or '|' to exit: \n";

        // set up conditions
        if (cin >> int1 >> int2)
        {
            // add a new condition
            if (int1 < int2)
            {
                cout
                    << "The smaller value is: " << int1 << '\n'
                    << "The larger value is: " << int2 << '\n';
            }
            else if (int1 > int2)
            {
                cout
                    << "The smaller value is: " << int2 << '\n'
                    << "The larger value is: " << int1 << '\n';
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