#include "std_lib_facilities.h"

int main()
{
    // variables
    // constants
    constexpr naira_per_dollar = 1495.50;
    constexpr kroner_per_dollar = 10.68;
    constexpr yuan_per_dollar = 7.2552;
    // non-constants
    double amount_input;
    char unit;

    // prompt user for conversion
    cout << "Please enter an amount that you want converted with one of the following units (n - Naira, k - Kroner, y - Yuan): \n";
    // read into object for input;
    cin >> amount_input >> unit;

    // switch statement
    switch (unit)
    {
    case 'n':
        cout << "Your amount of " << fixed << setprecision(2) << amount_input << " naira, is " << fixed << setprecision(2) << amount_input / naira_per_dollar << " in dollars. \n";

        break;
    case 'k':
        cout << "Your amount of " << fixed << setprecision(2) << amount_input << " kroner, is " << fixed << setprecision(2) << amount_input / kroner_per_dollar << " in dollars. \n";

        break;
    case 'y':
        cout << "Your amount of " << fixed << setprecision(2) << amount_input << " yuan, is " << fixed << setprecision(2) << amount_input / yuan_per_dollar << " in dollars. \n";

        break;
    }
}