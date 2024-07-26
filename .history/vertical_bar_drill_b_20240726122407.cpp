/*
Description:
Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare one char and two ints
    char char1;
    int int1, int2;
    // set up while-statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers or '|' to stop: \n";
        // set up conditions
        if (cin >> int1 >> int2)
        {
            cout << int1 << '\t' << int2 << '\n';
        }
        else
        {
            // clear standard output stream
            cin.clear();
                // redirect type of user input
                cin >> char1;
            // provide new condition
            if (char1 == '|')
            {
                // terminate program
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
Things learned:
- Inner if statement within else statement
- utilization of cin.clear();
- important of break in a loop;
- redirection of a different type into the standard input stream after the utilization of cin.clear();
- the formulaic prevention of an infinite loop (i.e., additionally declare a suitable type.).


*/