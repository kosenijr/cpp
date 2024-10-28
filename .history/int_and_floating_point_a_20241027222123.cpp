#include "std_lib_facilities.h"

int main()
{
    int a = 7;
    double b = 2.08;
    double c = 63.18;
    int d = 5;

    // operators that do not work between two integers
        // cout << "two ints \n";
    // cout << a == d << '\n';
    // cout << a != d << '\n';
    // cout << a < d << '\n';
    // cout << a > d << '\n';

    cout << '\n';

    // cout << "int/float \n";
    // cout << a == b << '\n';
    // cout << a != b << '\n';
    // cout << a < b << '\n';
    // cout << a > b << '\n';

    // cout << '\n';

    // cout << "two floats \n";
    // cout << b == c << '\n';
    // cout << b != c << '\n';
    // cout << b < c << '\n';
    // cout << b > c << '\n';

    cout << '\n';

    // operators that work between two integer values
    // cout << "two ints \n";
    cout << a - d << '\n';
    cout << a + d << '\n';
    cout << a * d << '\n';
    cout << a / d << '\n';

    cout << '\n';

    // operators that do not work between two integer values
        // cout << "int/float \n";
    // cout << a - b << '\n';
    // cout << a + b << '\n';
    // cout << a * b << '\n';
    // cout << a / b << '\n';

    cout << '\n';

    // operators that do not work between two integer values
        // cout << "two floats \n";
    // cout << b - c << '\n';
    // cout << b + c << '\n';
    // cout << b * c << '\n';
    // cout << b / c << '\n';
    return 0;
}