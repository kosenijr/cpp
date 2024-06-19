#include "std_lib_facilities.h"

int main()
{
    // initializations
    int i = 0;
    constexpr int j = 97; // need j to stay in place.
    // while statement
    while (i < 26)
    {
        // message to standard output stream
        cout << char('a' + i) << '\t' << j + i << "\n";
        // iteration
        ++i;
    };
    return 0;
}