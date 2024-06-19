#include "std_lib_facilities.h"

int main()
{
    // initializations
    int i = 0; // no constant reinforcement; needs mobility.
    constexpr int j = 97; // need j to stay in place.
    // while statement
    while (i < 26) // i is our iterator.
    {
        // message to standard output stream
        cout << char('a' + i) << '\t' << j + i << "\n";
        // iteration
        ++i;
    };
    return 0; 
}

// learned: char('a' + int-typed object) will iterate through the alphabet.