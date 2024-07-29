#include "std_lib_facilities.h"

// function double_to_string
string double_to_string (double dbl) {
    return dbl.str();
}


int main() {
    // initialize a double and declare a string
    double deci1 = 45.8946364;
    string deciString;

    // call function
    deciString = double_to_string(deci1);

    // check standard output stream;
    cout << decistring << '\t' << deci1 << '\n';

    return 0;
}