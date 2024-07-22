#include "std_lib_facilities.h"

int main()
{
    // declare two ints
    int a, b;
    cout << "Please enter two integers: \n";
    cin >> a >> b;
    // while statement
    while ((a != '|') || (b != '|'))
    {
        cout << a << " " << b << '\n';
    }
    return 0;
}