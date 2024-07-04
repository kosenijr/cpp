// with proper naming convention
#include "std_lib_facilities.h"

// set up square function
int square(int main_number)
{
    // intialize int-typed object with 0;
    const int squared_number = 0;
    // set up for loop
    for (int i = 0; i < main_number; ++i)
    {
        squared_number += main_number;
    };
    return squared_number;
};

// set up main function
int main() {
    // assignments
    constexpr forty_five = square(45);
    constexpr two_hundred_twenty_five = square(225);

    // standard output stream
    cout
    << "45 \t" << forty_five << '\n'
    << "225 \t" << two_hundred_twenty_five << '\n';
    return 0;


}