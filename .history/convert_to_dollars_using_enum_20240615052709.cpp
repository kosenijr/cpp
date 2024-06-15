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
double get_currency_rates(Currency currency)
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

int main()
{
    cout << yuan << "\n";
}