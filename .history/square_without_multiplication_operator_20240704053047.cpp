#include "std_lib_facilities.h"

int square (int x) {
    // for loop
    for (int i = 0; i < x; i++) {
        retun x + x;
    };
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