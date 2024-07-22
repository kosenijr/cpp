#include "std_lib_facilities.h"

int main()
{
    // declaration of ints and char
    int a;
    int b;
    char terminator = '|';
    string tDub = "This works!";

    // prompt user for input
    cout << "Please enter two integers: \n";
    // while statement
    while (cin >> a >> b)
    {

        // read into two ints
        cin >> a >> b;
        // send to standard output stream
        cout << a << " " << b << '\n';
    }
    return 0;
}