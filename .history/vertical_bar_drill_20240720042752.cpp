#include "std_lib_facilities.h"

int main() {
    // declaration of ints
    int a, b;
    // while statement
    while(cin >> a >> b) {
        // prompt user for input
        cout << "Please enter two integers: \n";
        // read into ints
        cin >> a >> b;
        // send ints to standard output stream
        cout << a << " " << b << '\n';
    };
    return 0;
}