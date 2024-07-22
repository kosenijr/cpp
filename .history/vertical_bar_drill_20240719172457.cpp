#include "std_lib_facilities.h"

int main()
{
    // declare two ints
    int a, b;
    // if-statement
    if (a != '|' || b != '|')
    {
        exit(1);
    }
    else
    {
        // while statement
        while ((a != '|') || (b != '|'))
        {
            cout << "Please enter two integers: \n";
            cin >> a >> b;
            cout << a << " " << b << '\n';
        };
    }
    return 0;
}