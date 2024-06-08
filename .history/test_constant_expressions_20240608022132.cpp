#include "std_lib_facilities.h"

// globally initializing constant expression
constexpr int abc = 317; // this is a compile-time constant with a value of 317.

// function that utilizes a constant
int use(int n) // void indicates that this function does not return a value
{
    // created a constant variable whose value is determined at runtime
    const int abcUpdated = abc + n;
    cout << abcUpdated << "\n";
    return 0;
};

int main()
{
    cout << abc << "\n"; // provides me with the value of the constant expression at the beginning.
    use(8);              // Call the 'use' function with an argument of 8; outputs 325 (317 + 8)
    use(10);             // Call the 'use' function with an argument of 10; outputs 327 (317 + 10).
    use(12);             // Call the 'use' function with an argument of 12; outputs 329 (317 + 12).

    // assignments
    int eight = use(8);
    int ten = use(10);
    int twelve = use(12);

    // output stream
    cout << "Constant expression plus 8 " << eight << "\n";
    cout << "Constant expression plus 10 " << ten << "\n";
    cout << "Constant expression plus 12 " << twelve << "\n";

    // return statement
    return 0;
}