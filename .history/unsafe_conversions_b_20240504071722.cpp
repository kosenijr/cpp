#include "std_lib_facilities.h"

int main()
{
    double d = 0;
    // input
    while (cin >> d)
    {
        // variables
        int i = d;
        char c = i;
        int i2 = c;
        int remain1 = (d % 255) - 1;
        // output
        cout << "d == " << d
             << "\ni == " << i
             << "\ni2 == " << i2
             << "\nchar(" << c << ")"
             << "\nremainder " << remain1 << "\n";

    }
}