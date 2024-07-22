#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    int a;
    int b;
    char c = '|';
    int i = (int)c;

    // function for converting char to int
    int CHAR_TO_INT(char c)
    {
        return i;
    }

    // while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter two integers: \n";
        // read into two ints
        cin >> a >> b;
        if (a == CHAR_T0_INT('|'))
        {
            break;
        }
        else
        {
            // send to standard output stream
            cout << a << " " << b << '\n';
        }
    }

    // check
    cout << i << '\n';

    return 0;
}