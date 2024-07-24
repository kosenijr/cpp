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

    // set up while statement
    while (true) {
        // prompt user for input
        cout << prompt;
        // condition
        if (cin >> int1 >> int2) {
            cout << int1 << '\t' << int2 << '\n';
        } else if (cin >> char1) {
            // reset standard input stream;
            if (cin >> char1) {
                break;
            }
        }
    };
    // return statement
    return 0;
}