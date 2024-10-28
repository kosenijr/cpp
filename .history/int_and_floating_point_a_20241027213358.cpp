#include "std_lib_facilities.h"

int main()
{
    constexpr int a = 7;
    constexpr double b = 2.08;

    cout << a == b << '\n';
    cout << a != b << '\n';
    cout << a < b << '\n';
    cout << a > b << '\n';
    cout << a - b << '\n';
    cout << a + b << '\n';
    cout << a * b << '\n';
    cout << a / b << '\n';

    return 0;
}