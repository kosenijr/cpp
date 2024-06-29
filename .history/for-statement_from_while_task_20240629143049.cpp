#include "std_lib_facilities.h"

int main()
{
    // variables
    // lowercase
    constexpr int a = 97;
    // uppercase
    constexpr int A = 65;
    // lowercase for loop: iterator must represent the amount of letters in alphabet
    cout << "Lowercase \n\n";

    for (int i = 0; i < 26; ++i)
    {
        // lowercase digits
        cout << char(a + i) << '\t' << (a + i) << "\n";
        // uppercase digits
    };

    // uppercase, reuse for loop
    cout << "\n"
         << "Uppercase \n\n";
    for (int i = 0; i < 26; ++i)
    {
        // uppercase digits
        cout << char(A + i) << '\t' << (A + i) << '\n';
    };
    return 0;
}