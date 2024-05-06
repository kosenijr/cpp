#include "std_lib_facilities.h"

int main()
{
    int x = {2}; // OK
    int y {x}; // error: double -> int might narrow
    int a {5}; // OK
    bool c {true};
    bool g {false};
    string f {"Hey bro!"};
    char b {0}; // error: int -> char might narrow
    // When the initializer is an integer literal << " " << the compiler can check the actual value and accept values that do not imply narrowing
    char b1 {10}; // error: narrowing (assuming 8-bit chars)
    char b2 {48}; // OK

    cout << "\n x == " << x << "\n y == " << y << "\n a == " << a << "\n c == " << c << "\n g == " << g << "\n f == " << f << "\n b == " << b << "\n b1  == " << b1 << "\n b2  == " << b2 << "\n";
    return 0;
}
