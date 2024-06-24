//  include libraries
#include "std_lib_facilities.h"
// add an enum of common terms
enum Currency
{
    Nairas,     // Nigeria
    Birrs,      // Ethiopia
    Escudos,    // Cape Verde
    Maloti,     // Lesotho
    Kwachas,    // Malawi
    Dinars,     // Libya
    Emalangeni, // Swaziland
    Dirhams,    // Morocco
    Leones,     // Sierra Leone
    Ouguiyas,   // Mauritania
    null        // invalid
};

// function with switch statement for rates
double get_conversion_rates(Currency tender)
{
    switch (tender)
    {
    case Nairas:
        return 768.50;
        break;
    case Birrs:
        return 57.75;
        break;
    case Escudos:
        return 102.75;
        break;
    case Maloti:
        return 18.72;
        break;
    case Kwachas:
        return 1045.50;
        break;
    case Dinars:
        return 4.84;
        break;
    case Emalangeni:
        return 18.72;
        break;
    case Dirhams:
        return 10.19;
        break;
    case Leones:
        return 22550;
        break;
    case Ouguiyas:
        return 37.10;
        break;
    default:
        return 0.00;
        break;
    };
};
// function with switch statement for enum terms
Currency char_to_currency(char unit)
{
    switch (unit)
    {
    case 'n':
        return Nairas;
        break;
    case 'b':
        return Birrs;
        break;
    case 'c':
        return Escudos;
        break;
    case 'm':
        return Maloti;
        break;
    case 'k':
        return Kwachas;
        break;
    case 'l':
        return Dinars;
        break;
    case 'e':
        return Emalangeni;
        break;
    case 'd':
        return Dirhams;
        break;
    case 's':
        return Leones;
        break;
    case 'o':
        return Ouguiyas;
        break;
    default:
        return null;
        break;
    };
};

// function with switch statement for string terms
string currency_to_string(Currency tender)
{
    switch (tender)
    {
    case Nairas:
        return "Nairas";
        break;
    case Birrs:
        return "Birrs";
        break;
    case Escudos:
        return "Escudos";
        break;
    case Maloti:
        return "Maloti";
        break;
    case Kwachas:
        return "Kwachas";
        break;
    case Dinars:
        return "Dinars";
        break;
    case Emalangeni:
        return "Emalangeni";
        break;
    case Dirhams:
        return "Dirhams";
        break;
    case Leones:
        return "Leones";
        break;
    case Ouguiyas:
        return "Ouguiyas";
        break;
    default:
        return "null";
        break;
    };
};
// main function
int main()
{
    // initialization
    double amount = 0.00;
    char unit = ' ';
    // prompt user for input
    cout
        << "Please enter the amount, followed by one of the units listed, for conversion to dollars: \n"
        << "n - Nigerian Nairas b- Ethiopian Birrs c - Cape Verdean Escudos \n"
        << "m - Lesotho Maloti k - Malawian Kwachas l - Libyan Dinars \n"
        << "e - Swazi Emalangeni d - Moroccan Dirhams s - Sierra Leonean Leones \n"
        << "o - Mauritanian Ouguiyas) \n\n";

    // read into objects
    cin >> amount >> unit;
    // call functions
    // get currency, then string
    Currency tender_enum = char_to_currency(unit);
    string tender_string = currency_to_string(tender_enum);
    // get rates
    double conversion_rate = get_conversion_rates(tender_enum);
    // check
    // cout << fixed << setprecision(2) << conversion_rate << '\t' << tender_enum << '\t' << tender_string << '\n';
    // condition
    if (conversion_rate == 0.00)
    {
        cout << "This currency is either unknown or not one of our options. \n";
    }
    else
    {
        cout
            << amount << " " << tender_string << " is $" << fixed
            << setprecision(2) << amount / conversion_rate
            << ". \n";
    }
    // return statement
    return 0;
};