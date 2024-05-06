#include "std_lib_facilities.h"

int main()
{
    double x = {2.7}; // OK
    double y {x}; // error: double -> int might narrow
    char a {10; // OK
    char b {a}; // error: int -> char might narrow
    // When the initializer is an integer literal, the compiler can check the actual value and accept values that do not imply narrowing

    char b1 {100}; // error: narrowing (assuming 8-bit chars)
    char b2 {48}; // OK

    // output
    cout << b << "\n";
    return 0;
}

/*
unsafe_conversions_c.cpp: In function ‘int main()’:
unsafe_conversions_c.cpp:6:12: warning: narrowing conversion of ‘x’ from ‘double’ to ‘int’ [-Wnarrowing]
    6 |     int y {x}; // error: double -> int might narrow
      |            ^
unsafe_conversions_c.cpp:8:13: warning: narrowing conversion of ‘a’ from ‘int’ to ‘char’ [-Wnarrowing]
    8 |     char b {a}; // error: int -> char might narrow
      |             ^
unsafe_conversions_c.cpp:11:14: error: narrowing conversion of ‘1000’ from ‘int’ to ‘char’ [-Wnarrowing]
   11 |     char b1 {1000}; // error: narrowing (assuming 8-bit chars)
*/