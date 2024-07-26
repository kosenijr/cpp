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
    char char;
    int int1, int2;
    // set up while-statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers or '|' to stop: \n";
        // set up conditions
        if (cin >> char &&char == '|')
        {
            // terminate program
            break;
        }
        else
        {
            if (cin >> int1 >> int2)
            {
                cout << a << '\t' << b << '\n';
            }
            else
            {
                cout << "Your input was incorrect. \n";
            }
        }
    };
    // return statement
    return 0;
}