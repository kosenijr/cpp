#include "std_lib_facilities.h"

int main()
{
    // necessary initialization before loop
    char a = 97;
    int i = 0;

    // check
    // cout << a << ", " << i << "\n";

    // while statement
    while (i < 123)
    {
        // send message into the standare output stream
        cout << 'a' + 2 << '\t' << a + i << "\n";
        // iteration
        ++i;
    };
    
    return 0;
}