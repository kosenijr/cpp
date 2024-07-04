#include "std_lib_facilities.h"

// function with for loop
int square(int y)
{
    // variable
    int x = 0;
    // for loop
    for (int i = 0; i < y; ++i)
    {
        x += y;
    };
    return x;
};

// main function
int main()
{
    int ten = square(10);
    int one_hundred = square(100);
    int two_hundred_fifty_five = square(255);
    int three_thousand_three_hundred = square(3300);
    cout
        << "Ten \t" << ten << '\n'
        << "One hundred \t" << one_hundred << '\n'
        << "Two-Hundred and Fifty-five \t" << two_hundred_fifty_five << '\n'
        << "Three-Thousand Three-Hundred \t" << three_thousand_three_hundred << '\n'
        
    return 0;
}