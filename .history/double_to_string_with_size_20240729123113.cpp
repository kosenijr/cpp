#include "std_lib_facilities.h"

// function double_to_string
double double_count (double dbl)
{
    // create a vector
    vector<int> numbers;
    // push dbl into vector;
    numbers.push_back(dbl);
    
    return numbers;

}

int main()
{
    // initialize a double and declare a string
    double deci1 = 45.8946364;
    string deciString;

    // call function
    deciString = double_to_string(deci1);

    // check standard output stream;
    cout << deciString << '\t' << deci1 << '\n';
    cout << ask << '\n';

    return 0;
}