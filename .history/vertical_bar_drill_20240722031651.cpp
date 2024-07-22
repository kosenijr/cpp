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
        if (a == char_to_int('|'))
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