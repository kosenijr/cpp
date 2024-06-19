#include "std_lib_facilities.h"

int main() {
    // necessary initialization before loop
    char a = 97;
    int i = 0;


    // while statement
    while(i < 123) {
        // send message into the standare output stream
        cout << 'a'+i << '\t' << a+i << "\n";
        // iteration
        ++i;
    }

    // check
    // cout << a << ", " << i << "\n";
}