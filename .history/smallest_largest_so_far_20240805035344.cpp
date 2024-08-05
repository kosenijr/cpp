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
    // two doubles for smallest and largest values respectively
    double smallest_so_far, largest_so_far;

    // set up while statement with true parameter
    while (true)
    {
        // prompt user for input
        cout << "Please enter one decimal or '|' to exit: \n";

        // set up conditions
        if (cin >> dbl1)
        {
         if (dbl1 >= 0 && !smallest_so_far && !largest_so_far) {
            smallest_so_far = 0;
            largest_so_far = dbl1;
         } 
         
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