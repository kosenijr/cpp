#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    int a;
    int b;
    char stop_program = '|';
    bool status = true;

// conditional
if ( a == '|') {
    exit(0);
};

    // while statement
    while ( a != '|')
    {
        // prompt user for input
        cout << "Please enter two integers: \n";
        // read into two ints
        cin >> a >> b;
        // send to standard output stream
        cout << a << " " << b << '\n';

    }
    return 0;
}