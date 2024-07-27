/*
Change the program to write out the smaller value is: followed by
the smaller of the numbers and the larger value is: followed by the
larger value.
*/

#include "std_lib_facilities.h"

int main() {
    // declare one char and two ints
    char char1;
    int int1, int2;
    
    // set up while statement with true parameter
    while(true) {
        // prompt user for input
        cout << "Please enter two integers or a '|' to exit: \n";

        // set up conditions
        if(cin >> int1 >> int2) {
            cout << int1 << '\t' << int2 << '\n';
        } else {
            // clear out the standard output stream
            cin.clear();
            // redirect input to char
            cin >> char1;
            // set up inner condition
            if(char1 == '|') {
                break;
            } else {
                cout << "Incorrect input. \n";
            };
        };
    };
    // return statement
    return 0;
}