// example with errors
#include "std_lib_facilities.h"

int Main() // first error: main should not be capitalized; should be lowercase.
{
    STRING s = "Goodbye, cruel world! "; // second error: string is to be lowercase as well.
    cOut << S << '\n'; // third error: the standard output stream, cout, should be lowercase; fourth error: "s" is uppercase; it should be lowercase.
    // additional error: no return statement
    }