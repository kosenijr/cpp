/*
Write a program that consists of a while-loop that (each time around
the loop) reads in two ints and then prints them. Exit the program
when a terminating '|' is entered.
*/

#include "std_lib_facilities.h"

// function for converting char to int
int char_to_int(char c)
{
    int i = (int)c;
    return i;
}

int main()
{
    // declaration of ints and char
    int a;
    int b;
    int i;

    // while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers: \n";
        // read into two ints
        cin >> a >> b;
        if (a == false)
        {
            break;
        }
        else
        {
            // send to standard output stream
            cout << a << " " << b << '\n';
        }
    }

    return 0;
}