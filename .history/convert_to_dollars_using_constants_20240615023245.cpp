#include "std_lib_facilities.h"

int main()
{
    // variables
    // constants
    constexpr double naira_per_dollar = 1495.50;
    constexpr double yen_per_dollar = 157.40;
    constexpr double kroner_per_dollar = 10.68;
    constexpr double pounds_per_dollar = 0.79;
    // non-constants
    // initialize object for user input
    double amount_input = 1;
    char unit = ' ';
    // user prompt
    cout
        << "Please enter the currency amount (X) for conversion to dollars based on our conversion options \n"
        << "(Xn - Naira, Xy - Yen, Xk - Kroner, Xp - Pounds): \n";
    // read into standard output stream
    cin >> amount_input >> unit;
    // conditionals
    if (unit == 'n')
    {
        cout << "Your amount of " << fixed << setprecision(2) << amount_input << " naira, is " << fixed << setprecision(2) << amount_input / naira_per_dollar << " in dollars. \n";
    }
    else if (unit == 'y')
    {
        cout << "Your amount of " << fixed << setprecision(2) << amount_input << " yen, is " << fixed << setprecision(2) << amount_input / yen_per_dollar << " in dollars. \n";
    }
    else if (unit == 'k')
    {
        cout << "Your amount of " << fixed << setprecision(2) << amount_input << " kroner, is " << fixed << setprecision(2) << amount_input / kroner_per_dollar << " in dollars. \n";
    }
    else if (unit == 'p')
    {
        cout << "Your amount of " << fixed << setprecision(2) << amount_input << " pounds, is " << fixed << setprecision(2) << amount_input / pounds_per_dollar << " in dollars. \n";
    }
    else
    {
        // send message of unfamiliarity to standard output stream
        cout << "That option is not a currency in the system. \n";
    }
}