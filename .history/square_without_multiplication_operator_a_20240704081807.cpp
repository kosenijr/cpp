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
    cout
        << "Ten \t" << ten << '\n'
        << "One hundred \t" << one_hundred << '\n';
    return 0;
}