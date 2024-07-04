#include "std_lib_facilities.h"
// variable
int x = 0;
// function
int square(int y) {
    while (y != sqrt(x)) {
        x += y;
    }
    return x;
} 


int main()
{
    // assign function
    int two = square(2);
    int four = square(4);

    // sent to standard output stream
    cout
        << "Two" << '\t' << two << "\n"
        << "Four" << '\t' << four << "\n";

    // return statement
    return 0;
}