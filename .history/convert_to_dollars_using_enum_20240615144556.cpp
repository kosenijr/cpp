#include "std_lib_facilities.h"
// add enum for currency names
enum Currency // "Currency" is now a type.
{
    naira,
    kroner,
    yuan,
    null
};

// add function w/ switch for currency rates
double get_conversion_rate(Currency currency)
{
    // use switch
    switch (currency)
    {
    case naira:
        return 1495.50;
        break;
    case kroner:
        return 10.68;
        break;
    case yuan:
        return 7.2552;
        break;
    default:
        return 0.00;
        break;
    }
}

// change char to their respective currency
Currency char_to_currency(char unit)
{
    // use switch
    switch (unit)
    {
    case 'n':
        return naira;
        break;
    case 'k':
        return kroner;
        break;
    case 'y':
        return yuan;
        break;
    default:
        return null;
        break;
    }
}

int main()
{
    // variables
   double amount_input = 0.00;
    char unit = ' ';
    // prompting of user
    cout << "Please enter an amount and one of the following units for conversion to dollars (n - Naira, k - Kroner, y - Yuan): \n";
    // read into objects
    cin >> amount_input >> unit; // receiving a double and a unit
    // call functions
    // unit (utilize enum-type:Currency)
    Currency currency = char_to_currency(unit);
    // rate
    double conversion_rate = get_conversion_rate(currency);
    // conditionals
    if (currency == null || conversion_rate == 0.00)
    {
        cout << "The unit selected is not known within our system. \n";
    }
    else
    {
        cout << "The selected amount of " << amount_input << " " << currency << " is " << fixed << setprecision(2) << amount_input / conversion_rate << " dollars. \n";
    }
}