/*
Now change the body of the loop so that it reads just one double
each time around. Define two variables to keep track of which is the
smallest and which is the largest value you have seen so far. Each
time through the loop write out the value entered. If it's the smallest
so far, write the smallest so far after the number. If it is the largest
so far, write the largest so far after the number.
*/

#include "std_lib_facilities.h"

int main() {
    // declare specific-typed object: no initialization
    char char1;
    double dbl1, smallest_so_far, largest_so_far;

    // set up while statement
    while(true) {
        // prompt user for input
        cout << "Please enter a decimal or '|' to exit: \n";

        // set up conditions
        if (cin >> dbl1) {
            cout << dbl1 << '\n';
        } else {
            // clear out standard input stream
            cin.clear();
            // read into different type
            cin >> char1;

            // set up inner condition
            if (char1 == '|') {
                break;
            } else {
                cout << "Try again. \n";
            }
        }
    }
    // return statement
    return 0;
}

