#include "std_lib_facilities.h"

int main()
{
    constexpr int a = 7;
    constexpr double b = 2.08;
    constexpr double c = 63.18;
    constexpr int d = 5;

    // operators that do not work between integer and floating-point or two floating-point values
    // int/float
    // cout << a == b << '\n';
    // cout << a != b << '\n';
    // cout << a < b << '\n';
    // cout << a > b << '\n';

    // two floats
    // cout << b == c << '\n';
    // cout << b != c << '\n';
    // cout << b < c << '\n';
    // cout << b > c << '\n';

    cout << '\n';

    // operators that work between two integer values
    // two ints
    cout << a - d << '\n';
    cout << a + d << '\n';
    cout << a * d << '\n';
    cout << a / d << '\n';

    // operators that do not work between two integer values
    // two ints
    cout << a == d << '\n';
    cout << a != d << '\n';
    cout << a < d << '\n';
    cout << a > d << '\n';

    return 0;
}