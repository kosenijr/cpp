#include "std_lib_facilities.h"

// function double_to_string
// double double_count (double dbl)
// {
//     // create a vector
//     vector<double> numbers;
//     // push dbl into vector;
//     numbers.push_back(dbl);
// }

int main()
{
    // initialize a double and declare a string
    double deci1 = 45.8946364;


    vector<double> numbers;
    // push dbl into vector;
    numbers.push_back(deci1);

    // check standard output stream;
    cout << numbers << '\n';

    return 0;
}