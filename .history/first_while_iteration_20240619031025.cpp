#include "std_lib_facilities.h"

int main()
{
    // necessary initialization before loop
    int arr[] = {0, 97};
    auto [i, j] = arr;

    // check
    // cout << a << ", " << i << "\n";

    // while statement
    while (i < 26)
    {
        // send message into the standare output stream
        cout << char('a' + i) << '\t' << j + i << "\n";
        // iteration
        ++i;
    };
    
    return 0;
}