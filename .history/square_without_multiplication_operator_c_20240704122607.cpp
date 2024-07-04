// with proper naming convention
#include "std_lib_facilities.h"
// set up square function
const int square(int main_number)
{
    // intialize int-typed object with 0;
    int final_number = 0;
    // set up for loop
    for (int i = 0; i < main_number; ++i)
    {
        final_number += main_number;
    };
    return final_number;
};

// set up main function
int main()
{
    // request inputs
    constexpr int squared_number = square();

    // standard output stream
    cout << " squared is " << squared_number << '\n';
    return 0;
}

//  learned: can utilize constexpr for a function when all arguments/parameters are known at compile time (i.e., present example); however, const should be used for run time evaluation. Will experiment in file c!