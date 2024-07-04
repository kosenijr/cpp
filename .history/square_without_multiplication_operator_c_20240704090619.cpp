// with proper naming convention
#include "std_lib_facilities.h"

// set up square function
const int square(int main_number)
{
    // intialize int-typed object with 0;
    int squared_number = 0;
    // set up for loop
    for (int i = 0; i < main_number; ++i)
    {
        squared_number += main_number;
    };
    return squared_number;
};

// set up main function
int main() {
    // request inputs
    cin >> main_number;
    constexpr int final_number = square(main_number);

    // standard output stream
    cout << main_number << " squared is " << final_number << '\n';
    return 0;
}

//  learned: can utilize constexpr for a function when all arguments/parameters are known at compile time (i.e., present example); however, const should be used for run time evaluation. Will experiment in file c!