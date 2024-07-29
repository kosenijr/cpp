#include "std_lib_facilities.h"

// function double_to_string
string double_to_string(double dbl)
{
    ostringstream stringedDbl;
    stringedDbl << dbl;
    return stringedDbl.str();
}

int main()
{
    // initialize a double and declare a string
    double deci1 = 45.8946364;
    string deciString;

    // call function
    deciString = double_to_string(deci1);

    // check standard output stream;
    cout << deciString << '\t' << deci1 << '\n';
    cout << typeid(deciString).name() << '\t' << typeid(deci1).name() << '\n';

    return 0;
}