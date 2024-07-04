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
    int six = square(6);
    cout << "Six \t" << six << '\n';
    return 0;
}