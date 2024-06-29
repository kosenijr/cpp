#include "std_lib_facilities.h"

// declare the function: square
int square(int num) { return num * num; }

int main()
{
    for (int i = 0; i < 100; ++i)
    {
        // utilize square in the for loop
        cout << i << '\t' << square(i) << '\n';
        ++i; // conventional no-no: no continued iteration of main variable in body
    }
}