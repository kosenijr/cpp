/*
Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare two ints and a char
    int a, b;
    constexpr char pipe = '|';

    // set up while-statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers or '|' to quit: \n";
        // read into the two ints
        cin >> a >> b;
        // conditional
        if (a == false a == static_cast<int>'|')
        {
            cin.exceptions();
            break;
        };
        // send the two ints to the standard output stream
        cout << a << " " << b << '\n';
    };

    // return statement
    return 0;
}