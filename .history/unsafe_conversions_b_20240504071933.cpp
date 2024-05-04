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
        int remain1 = (i%255) - 1; // couldn't use double and int with operand: type must match
        // output
        cout << "d == " << d
             << "\ni == " << i
             << "\ni2 == " << i2
             << "\nchar(" << c << ")"
             << "\nremainder " << remain1 << "\n";

    }
}