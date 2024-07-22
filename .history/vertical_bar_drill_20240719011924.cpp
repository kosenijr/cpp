#include "std_lib_facilities.h"

int main()
{
    // declare two ints
    int a, b;
    // while statement
    while ((a != '|') || (b != '|'))
    {
        cout << "Please enter two integers: \n";
        cin >> a >> b;
        cout << a << " " << b << '\n';
    };
    exit(1);
    return 0;
}