#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    int a, b;
    char pipe;
    // while statement
    while (cin)
    {
        // prompt user for input
        cout << "Please enter two integers: \n";
        // send ints to standard output stream
        if (a != '|' || b != '|')
        {
            // read into ints
            cin >> a >> b;
            cout << a << " " << b << '\n';
        }
    };
    return 0;
}