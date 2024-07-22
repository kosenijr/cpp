#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    const int a;
    const int b;
    char terminator = '|';

    // while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers, or '|' to terminate: \n";
        // switch statement
        if (a == terminator || b == terminator)
        {
            break;
        };
        // read into two ints
        cin >> a >> b;
        // send to standard output stream
        cout << a << " " << b << '\n';
        return 0;
    }