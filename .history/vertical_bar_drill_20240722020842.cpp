#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    int a;
    int b;
    char terminator = '|';

    // while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers, or '|' to terminate: \n";
        // switch statement
        if (a == terminator || b == terminator)
        {
            exit(exit_success);
        };
        // read into two ints
        cin >> a >> b;
        // send to standard output stream
        cout << a << " " << b << '\n';
    }
    return 0;
}