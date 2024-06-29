#include "std_lib_facilities.h"

int main()
{
    // variables
    constexpr int a = 97;
    // lowercase for loop: iterator must represent the amount of letters in alphabet
    for (int i = 0; i < 26; ++i)
    {
        // lowercase digits
        cout
            << "Lowercase \n"
            << char(a + i) << '\t' << (a + i) << "\n\n\n\n";
        // uppercase digits
    };

    // uppercase for loop: iterator must represent the amount of letters in alphabet
    for (int i = 0; i < 26; ++i)
    {
        // uppercase digits
        cout
            << "Uppercase \n"
            << char(a - i) << '\t' << (a - i) << '\n';
    };
    return 0;
}