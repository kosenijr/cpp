#include "std_lib_facilities.h"

int main()
{
    // declare two objects with int type
    double val1, val2;
    // prompting for two integers
    cout << "Please enter two values that are integers: \n";
    // read into the two integers, respectively
    cin >> val1 >> val2;

    // double to int truncation
    int val1_int = val1;
    int val2_int = val2;

    // implement gcd
    int divisor = gcd(val1_int, val2_int);
    int val1_simplified = val1_int/divisor;
    int val2_simplified = val2_int/divisor;


    // manipulations
    // smaller and larger
    if (val1 < val2)
    {
        cout
            << "The smaller number: " << val1 << "\n"
            << "The larger number: " << val2 << "\n"
            << "The sum: " << val1 + val2 << "\n"
            << "The difference: " << val2 - val1 << "\n"
            << "The product: " << val1 * val2 << "\n";
    }
    else
    {
        cout
            << "The smaller number: " << val2 << "\n"
            << "The larger number: " << val1 << "\n"
            << "The sum: " << val1 + val2 << "\n"
            << "The difference: " << val1 - val2 << "\n"
            << "The product: " << val1 * val2 << "\n";
    };

    // ratio
    cout << "The ratio: " << val1_simplified << ":" << val2_simplified << "\n";

    // return statement
    return 0;
}