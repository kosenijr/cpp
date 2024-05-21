#include "std_lib_facilities.h"

int countDecimalPlaces(double number)
{
    // Convert the number to a string using stringstream
    std::ostringstream oss;
    oss << number;
    std::string strNumber = oss.str();

    // Find the position of the decimal point
    std::size_t pos = strNumber.find('.');

    if (pos == std::string::npos)
    {
        // No decimal point found
        return 0;
    }

    // Count the number of characters after the decimal point
    return strNumber.size() - pos - 1;
}

int main()
{
    // declare two objects with int type
    double val1, val2;
    // prompting for two floating-point values
    cout << "Please enter two decimal values: \n";
    // read into the two integers, respectively
    cin >> val1 >> val2;
    // turn decimals whole through multiplication

    double number;
    std::cout << "Enter a floating-point number: ";
    std::cin >> number;

    int decimalPlaces = countDecimalPlaces(number);
    std::cout << "Number of digits after the decimal point: " << decimalPlaces << std::endl;

    // // calculate the greated common denominator
    // int divisor = gcd( val1, val2);
    // int val1_simplified = val1 / divisor;
    // int val2_simplified = val2 / divisor;

    // // manipulations
    // // smaller and larger
    // if (val1 < val2)
    // {
    //     cout
    //         << "The smaller number: " << val1 << "\n"
    //         << "The larger number: " << val2 << "\n"
    //         << "The sum: " << val1 + val2 << "\n"
    //         << "The difference: " << val2 - val1 << "\n"
    //         << "The product: " << val1 * val2 << "\n";
    // }
    // else
    // {
    //     cout
    //         << "The smaller number: " << val2 << "\n"
    //         << "The larger number: " << val1 << "\n"
    //         << "The sum: " << val1 + val2 << "\n"
    //         << "The difference: " << val1 - val2 << "\n"
    //         << "The product: " << val1 * val2 << "\n";
    // };

    // // ratio
    // cout << "The ratio: " << val1_simplified << ":" << val2_simplified << "\n";

    // testing
    cout << val1 << " and " << val2 << "\n";
    // return statement
    return 0;
}