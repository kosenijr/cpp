/*
Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare two ints and a char
    int int1, int2; // for the two integers needed for user input;
    char char1; // need char for termination

    // set up while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers or '|' to stop: \n";
        // start with condition
        if (cin >> int1 >> int2)
        {
            // condition
            cout << int1 << '\t' << int2 << '\n';
        }
        else
        {
            cin.clear();
            cin >> char1;

            if (char1 == '|') // started with char first to avoid error later.
            {
                break; // termination of loop/program
            }
            else
            {
                cout << "Invalid Input. \n";
            };
        };
    };
    // return statement
    return 0;
}

/*
Things learned:
- Inner if statement within else statement
- utilization of cin.clear();
- importance of **break** in a loop;
- redirection of a different type into the standard input stream after the utilization of cin.clear();
- the formulaic prevention of an infinite loop (i.e., additionally declare a suitable type and utilize that as well).
*/