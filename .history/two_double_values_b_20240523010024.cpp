#include "std_lib_facilities.h"

int main()
{
    // declare two objects with int type
    double val1, val2;
    // prompting for two integers
    cout << "Please enter two values that are integers: \n";
    // read into the two integers, respectively
    cin >> val1 >> val2;    
    // conversion
    // write a consistent function that turns decimals to whole numbers
    int decimaltoWhole (a, b) {
        // turn double type to string
        std::ostringstream a_stream, b_stream;
        a_stream << a;
        b_stream << b;
        std::string aAsString = a_stream.str();
        std::string bAsString = b_stream.str();
        // set up for loop (encompassing)

        // run loop
    };
    decimaltoWhole(val1, val2);;

    // calculate the greated common denominator
    int divisor = gcd(val1, val2);
    int val1_simplified = val1 / divisor;
    int val2_simplified = val2 / divisor;

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
    // cout << "The ratio: " << val1_simplified << ":" << val2_simplified << "\n";
    // cout << val1 << " " << val2 << "\n";
    cout << aAsString << " " << bAsString << "\n";

    // return statement
    return 0;
}