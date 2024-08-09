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
    // declare specific-typed object: ALWAYS initialize
    char char1;
    double dbl1
        // Must initialize
        double smallest_so_far = 0;
    double largest_so_far = 0;
    // set up while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter a decimal or '|' to exit: \n";

        // set up conditions
        if (cin >> dbl1)
        {
            // conditionals for "so far"
            if (smallest_so_far == 0 && largest_so_far == 0)
            {
                largest_so_far = dbl1;
            }
            else if ()
            {
            }
            else
            {
            }
        }
        else
        {
            // clear out standard input stream
            cin.clear();
            // read into different type
            cin >> char1;

            // set up inner condition
            if (char1 == '|')
            {
                break;
            }
            else
            {
                cout << "Try again. \n";
            }
        }
    }
    // return statement
    return 0;
}
