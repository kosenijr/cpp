#include "std_lib_facilities.h"

int main() {
    // declaration of ints
    // while statement
    while(cin >> int a >> int b) {
        // prompt user for input
        cout << "Please enter two integers: \n";
        // read into ints
        cin >> a >> b;
        // send ints to standard output stream
        cout << a << " " << b << '\n';
    };
    return 0;
}