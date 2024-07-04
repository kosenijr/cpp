#include "std_lib_facilities.h"
// variable
int x = 0;
// function
int square(int y)
{
    while (y != sqrt(x))
    {
        x += y;
    };
    return x;
};

int main()
{
    // assign function
    int two = square(2);
    int four = square(4);
    int six = square(6);
    int ten = square(10);
    int twelve = square(12);
    int one_hundred = square(100);

    // sent to standard output stream
    cout
        << "Two" << '\t' << two << "\n"
        << "Four" << '\t' << four << "\n"
        << "Six" << '\t' << six << "\n"
        << "Ten" << '\t' << ten << "\n"
        << "Twelve" << '\t' << twelve << "\n"
        << "One Hundred" << '\t' << one_hundred << "\n";

    // return statement
    return 0;
}