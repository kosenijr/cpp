#include "std_lib_facilities.h"

int main()
{
    // declare two ints
    int a, b;
    // while statement
    while (a != '|' || b != '|')
    {
        cout << "Enter two integers:"
        cin >> a >> b;
        cout << a << " " << b << '\n';
    };
    return 0;
}