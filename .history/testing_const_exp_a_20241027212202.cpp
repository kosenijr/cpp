#include "std_lib_facilities.h"

int main()
{
    // constant expression
    string genesis = "The first book";
    string exodus = "The second book";
    char* leviticus = "The third book";

    // for-range loop
    for (char x : genesis)
    {
        cout << "Each letter: " << x << '\n';
    }
    cout << '\n';
    for (auto y : exodus)
    {
        cout << "Each letter: " << y << '\n';
    }
    cout << '\n';
    // output stream: constant expression
    // for (int i = 0; i < leviticus; ++i)
    // {
    //     cout << "Each letter: " << genesis[i] << '\n';
    // }

    cout << leviticus << '\n';

    return 0;
}