#include "std_lib_facilities.h"

int main()
{
    // constant expression
    constexpr const char* genesis = "The first book";
    string exodus = "The second book";

    // output stream
    cout
        << "Genesis: " << genesis[0] << '\n'
        << "Exodus: " << exodus << '\n';

    return 0;
}