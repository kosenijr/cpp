#include "std_lib_facilities.h"

int main()
{
    // declare two ints
    int a, b;
    // while statement
    while (a || b)
    {
        if ((a != '|') || (b != "|")) {
            exit(1);
        } else {

        cout << "Enter two integers: \n";
        cin >> a >> b;
        cout << a << " " << b << '\n';
        }
    };
    return 0;
}