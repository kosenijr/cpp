/*
Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare two ints and a char
    int int1; // for the two integers needed for user input
    int int2;
    char char1;                                                           // need char for termination
    const string prompt = "Please enter two integers or '|' to stop: \n"; // string-typed object prompt

    // set up while statement
    while (true)
    {
        // prompt user for input
        cout << prompt;
        // start with condition
        if ((cin >> char1) && (char1 == '|')) // started with char first to avoid error later.
        {
            break; // termination of loop/program
        }

        if (cin >> int1 >> int2)
        {
            ; // if first condition fails, then integers can come alive.
            // condition
            cout << int1 << '\t' << int2 << '\n';
        }
    };
    // return statement
    return 0;
}