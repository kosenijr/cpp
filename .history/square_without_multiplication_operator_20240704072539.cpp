#include "std_lib_facilities.h"
// function
int square(int x, int y)
x = 0;
{
    while (y != sqrt(x))
    {
        x += y;
    };
    return x;
    // the while loop runs until the condition y == sqrt(x) is met, then exits the loop; the return statment provides us with the current value of x after the loop.
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