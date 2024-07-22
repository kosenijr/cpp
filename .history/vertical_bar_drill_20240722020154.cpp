#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    int a, b;
    char terminator = '|';

    // while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers, or '|' to terminate: \n";
        // switch statement
        switch(selection) {
            case a:
            case b:
            // read into two ints
            cin >> a >> b;
            // send to standard output stream
            cout << selection << '\n';
            case terminator:
            break;
        }
    return 0;
}