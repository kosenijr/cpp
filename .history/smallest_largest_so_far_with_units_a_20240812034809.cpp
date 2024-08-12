/*
Add a unit to each double entered; that is, enter values such as
10cm, 2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft.
Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft ==
12in. Read the unit indicator into a string. You may consider 12 m
(with a space between the number and the unit) equivalent to 12m
(without a space).
*/

#include "std_lib_facilities.h"

int main()
{
    // declare objects
    char char1;
    double dbl1;
    string unit;
    // initialize objects
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();

    // set up while-statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter a decimal or '|' to exit: \n";
        // set up conditions
        if (cin >> dbl1 >> unit)
        {
            cout << dbl1 << " " << unit << '. \n';
        }
        else
        {
            // clear out standard input stream
            cin.clear();
            // change type for reading
            cin >> char1;
            // set up inner condition
            if (char1 == '|')
            {
                break;
            }
            else
            {
                cout << "Try again! \n";
            }
        }
    }
    return 0;
}