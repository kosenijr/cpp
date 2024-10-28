#include "std_lib_facilities.h"

int main()
{
    // constant expression
    constexpr const char *genesis = "The first book";
    string exodus = "The second book";

    // for-range loop
    for (char x:genesis) {
        cout << "Each letter: " << x << '\n';
    }

    // output stream
    cout
        << "Genesis: " << genesis[0] << '\n'
        << "Exodus: " << exodus << '\n';

    return 0;
}