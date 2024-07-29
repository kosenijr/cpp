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
    double deciVect;

    // call function
    deciVect = double_count(deci1);

    //

    // check standard output stream;
    cout << deciVect[0] << '\t' << deciVect[1] << '\n';
    cout << ask << '\n';

    return 0;
}