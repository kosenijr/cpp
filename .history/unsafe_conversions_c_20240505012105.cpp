#include "std_lib_facilities.h"

int main()
{
    double x = {2.7}; // OK
    int y {x}; // error: double -> int might narrow
    int a {1000}; // OK
    char b {a}; // error: int -> char might narrow
    // When the initializer is an integer literal, the compiler can check the actual value and accept values that do not imply narrowing

    char b1 {1000}; // error: narrowing (assuming 8-bit chars)
    char b2 {48}; // OK
}