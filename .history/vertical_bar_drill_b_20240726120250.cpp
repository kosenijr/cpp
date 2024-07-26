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
        if (cin >> char1 && char1 == '|')
        {
            // terminate program
            break;
        }
        else if (cin >> char1 && char1 != '|')
        {
            cout << "Your input was incorrect. \n";
        } else {
            // clear out standard input stream
            cin.clear();
            // input ints
            cin >> int1 >> int2;

            // send to output stream
            cout << a << '\t' << b << '\n';
        }
    };
    // return statement
    return 0;
}