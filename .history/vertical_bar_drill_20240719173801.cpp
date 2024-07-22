#include "std_lib_facilities.h"

int main()
{
    // declare two ints
    int a, b;
    cout << "Please enter two integers: \n";
    // while statement
    while (cin >> a >> b)
    {
        cin >> a >> b;
        if ((a == '|') || (b == '|'))
        {
            exit(EXIT_FAILURE);
        }
        else
        {
            cout << a << " " << b << '\n';
        }
    }
    return 0;
}