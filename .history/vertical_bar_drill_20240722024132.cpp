#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    int a;
    int b;
    char stop_program = int('|');
    bool status = true;

    // while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers: \n";
        // read into two ints
        cin >> a >> b;
        // send to standard output stream
        cout << a << " " << b << '\n';

        if (getche() == '|') {
            break;
        };

    }
    return 0;
}