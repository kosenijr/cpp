/*
Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare two ints and a char
    int int1, int2;
    char char1;
    const string prompt = "Please enter two integers or '|' to stop: \n";

    // start with condition
    if (cin >> char1)
    {
        exit(0);
    }

    // set up while statement
    while (true)
    {
        // prompt user for input
        cout << prompt;
        cin >> int1 >> int2;
        // condition
        cout << int1 << '\t' << int2 << '\n';
    };
    // return statement
    return 0;
}