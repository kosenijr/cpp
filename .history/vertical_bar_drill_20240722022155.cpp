#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    int a;
    int b;
    char terminator = '|';
    string tDub = "This works!";

    // while statement
    while (a != terminator || b != terminator)
    {
        try
        {
            a == terminator || b == terminator
        }
        catch (int err)
        {
            cout << err << " will break \n";
            break;
        };
    }

    // prompt user for input
    cout << "Please enter two integers: \n";
    // read into two ints
    cin >> a >> b;
    // send to standard output stream
    cout << a << " " << b << '\n';
}
return 0;
}