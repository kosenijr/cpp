#include "std_lib_facilities.h"

int main() {
    for (int i = 0; i < 100; ++i) {
        cout << i << '\t' << square(i) << '\n';
        ++i;
    }
}