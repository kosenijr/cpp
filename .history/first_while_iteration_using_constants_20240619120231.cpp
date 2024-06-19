#include "std_lib_facilities.h"

int main()
{
    // initializations
    int i = 0;
    int j = 97;
    // while statement
    while (j < 122)
    {
        // message to standard output stream
        cout << char('a' + j) << '\t' << j + i << "\n";
        // iteration
        ++j;
    };
    return 0;
}