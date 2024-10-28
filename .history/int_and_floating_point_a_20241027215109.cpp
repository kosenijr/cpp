#include "std_lib_facilities.h"

int main()
{
    constexpr int a = 7;
    constexpr double b = 2.08;
    constexpr double c = 63.18;
    constexpr int d = 5;

    // operators that do not work between integer and floating-point or two floating-point values
    // cout << "int/float \n";
    // cout << a == b << '\n';
    // cout << a != b << '\n';
    // cout << a < b << '\n';
    // cout << a > b << '\n';

    // cout << "two floats \n";
    // cout << b == c << '\n';
    // cout << b != c << '\n';
    // cout << b < c << '\n';
    // cout << b > c << '\n';

    cout << '\n';

    // operators that work between two integer values
    cout << "two ints \n";
    cout << a - d << '\n';
    cout << a + d << '\n';
    cout << a * d << '\n';
    cout << a / d << '\n';

    cout << '\n';

    // operators that do not work between two integer values
    cout << "two ints \n";
    cout << a == d << '\n';
    cout << a != d << '\n';
    cout << a < d << '\n';
    cout << a > d << '\n';

    return 0;
}