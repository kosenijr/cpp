#include "std_lib_facilities.h"

int main() {
    // variables
    constexpr int a = 97;
    // for loop: iterator must represent the amount of letters in alphabet
    for (int i = 0; i < 26; ++i) {
        cout << char(a + i) << '\t' << (a + i);
    }
        return 0;
}