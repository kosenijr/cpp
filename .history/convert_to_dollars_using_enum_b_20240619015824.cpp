#include "std_lib_facilities.h"

// enumeration of currencies
enum Notes // Notes turns into a type.
{
    naira,  // Nigeria
    kroner, // Norway
    yen,    // Japan
    yuan,   // China
    pounds, // UK
    euro,   // Europe (absent UK)
    franc,  // France
    rupee,  // India
    real,
    null    // Brazil
};

// get rates: switch statement w/ Notes type
double get_conversion_rates(Notes note) // Notes-type exemplified; note is chosen as an object/variable with this type.
{
    switch (note)
    {
    case naira:
        return 1484.14;
        break;
    case kroner:
        return 10.69;
        break;
    case yen:
        return 157.32;
        break;
    case yuan:
        return 7.14;
        break;
    case pounds:
        return 0.79;
        break;
    case euro:
        return 0.93;
        break;
    case franc:
        return 0.89;
        break;
    case rupee:
        return 82.10;
        break;
    case real:
        return 4.83;
        break;
    default:
        return 0.00;
        break;
    }
}

// switch from char to currency
Notes char_to_currency(char unit_input)
{
    switch (unit_input)
    {
    case 'n':
        return naira;
        break;
    case 'k':
        return kroner;
        break;
    case 'j':
        return yen;
        break;
    case 'c':
        return yuan;
        break;
    case 'p':
        return pounds;
        break;
    case 'e':
        return euro;
        break;
    case 'f':
        return franc;
        break;
    case 'i':
        return rupee;
        break;
    case 'b':
        return real;
        break;
    default:
        return null;
        break;
    }
}
// this switch will return enum integer positions so one more switch must ensue.

// switch from currency to string
string currency_to_string(Notes note)
{
    switch (note)
    {
    case naira:
        return "naira";
        break;
    case kroner:
        return "kroner";
        break;
    case yen:
        return "yen";
        break;
    case yuan:
        return "yuan";
        break;
    case pounds:
        return "pounds";
        break;
    case euro:
        return "euros";
        break;
    case franc:
        return "francs";
        break;
    case rupee:
        return "rupees";
        break;
    case real:
        return "reais";
        break;
    default:
        return "null";
        break;
    }
}

// main function
int main()
{
    // variables
    double amount_input;
    char unit_input = ' ';
    // user prompt
    cout << "For conversion to dollars, please enter an amount and one of the following currencies (n - Naira, k - Kroner, j - Yen, c - Yuan, p - Pounds, e - Euro, f - Franc, i - Rupee, b - Real): \n";
    // read into objects
    cin >> amount_input >> unit_input;
    // call functions to add value to subsequent if statement and assign to objects
    // get currency name in the form of a string
    // first: char to enum
    Notes currency_enum = char_to_currency(unit_input);
    // second: currency to string
    string currency_string = currency_to_string(currency_enum);
    // get the rates
    double conversion_rate = get_conversion_rates(currency_enum);
    //  check out objects
    // cout
    //     << currency_enum << ", " << currency_string << ", " << conversion_rate << "\n";
    // final condition
    if (conversion_rate == 0.00 || currency_string == "null") {
        cout << "This currency and its rate is unknown. \n";
    } else {
        cout << "Your request of "<< fixed << setprecision(2) << amount_input << " " << currency_string << " is the equivalent of " << fixed << setprecision(2) << amount_input/conversion_rate << " dollars. \n";
    };
    // return statement
    return 0;
}