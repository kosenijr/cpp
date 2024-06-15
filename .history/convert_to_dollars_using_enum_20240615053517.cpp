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
char char_to_currency(char unit)
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
    
}