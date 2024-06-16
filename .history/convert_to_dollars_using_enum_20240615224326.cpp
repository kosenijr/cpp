#include "std_lib_facilities.h"

enum Currency
{
    naira,
    kroner,
    yuan,
    invalid
};

double get_conversion_rate(Currency currency)
{
    switch (currency)
    {
    case naira:
        return 1495.50;
    case kroner:
        return 10.68;
    case yuan:
        return 7.2552;
    default:
        return 0.0;
    }
}

Currency char_to_currency(char unit)
{
    switch (unit)
    {
    case 'n':
        return naira;
    case 'k':
        return kroner;
    case 'y':
        return yuan;
    default:
        return invalid;
    }
}

int main()
{
    double amount_input = 0.00;
    char unit = ' ';

    cout << "Please enter an amount that you want converted with one of the following units (n - Naira, k - Kroner, y - Yuan): \n";
    cin >> amount_input >> unit;

    Currency currency = char_to_currency(unit);
    double conversion_rate = get_conversion_rate(currency);

    if (currency == invalid || conversion_rate == 0.0)
    {
        cout << "That option is not a currency in the system. \n";
    }
    else
    {
        cout << "Your amount of " << fixed << setprecision(2) << amount_input << " " << unit << ", is " << fixed << setprecision(2) << amount_input / conversion_rate << " in dollars. \n";
    }

    return 0;
}