/*
Now change the body of the loop so that it reads just one double
each time around. Define two variables to keep track of which is the
smallest and which is the largest value you have seen so far. Each
time through the loop write out the value entered. If it's the smallest
so far, write the smallest so far after the number. If it is the largest
so far, write the largest so far after the number.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare one char and two ints
    char char1;
    double dbl1; // changed to read just one double
    // two doubles for smallest and largest values respectively; initialize
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();

    // set up while statement with true parameter
    while (true)
    {
        // prompt user for input
        cout << "Please enter one decimal or '|' to exit: \n";

        // set up conditions
        if (cin >> dbl1)
        {
            if (isnan(smallest_so_far) && isnan(largest_so_far)) {
                smallest_so_far = dbl1;
                largest_so_far = dbl1;
            } else {
                // two conditions
                if (dbl1 < smallest_so_far) smallest_so_far = dbl1;
                if (dbl1 > largest_so_far) largest_so_far = db1;

            }
         cout
         << "You entered: " << dbl1 << '\n'
         << "Smallest so far: " << smallest_so_far << '\n'
         << "Largest so far: " << largest_so_far << '\n';

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