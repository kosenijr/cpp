#include "std_lib_facilities.h"

int main()
{
    constexpr int a = 7;
    constexpr double b = 2.08;
    constexpr double c = 63.18;
    constexpr int d = 5;

    // operators that do not work between integer and floating-point values
    cout << b == c << '\n';
    cout << b != c << '\n';
    cout << b < c << '\n';
    cout << b > c << '\n';

    cout << '\n';

    // operators that work between integer and floating-point values
    cout
        << a - b << '\n';
    cout << a + b << '\n';
    cout << a * b << '\n';
    cout << a / b << '\n';

    return 0;
}