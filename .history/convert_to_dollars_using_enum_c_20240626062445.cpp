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
    null,
};

// function with switch statement for rates
double get_conversion_rates(Currency notes)
{
    switch (notes)
    {
    case Nairas:
        return 768.87;
    case Birrs:
        return 55.37;
    case Escudos:
        return 103.77;
    case Maloti:
        return 17.92;
    case Kwachas:
        return 1055.05;
    case Dinars:
        return 4.85;
    case Emalangeni:
        return 17.92;
    case Dirhams:
        return 10.03;
    case Leones:
        return 21580;
    case Ouguiyas:
        return 37.52;
    default:
        return 0.00;
        break;
    };
};

// function with switch statement for enum terms
Currency char_to_currency(char unit_input)
{
    switch (unit_input)
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
string currency_to_string(Currency notes)
{
    switch (notes)
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
        return "Null";
        break;
    };
};

// main function
int main()
{
    // initialization
    double amount_input = 0.00;
    char unit_input = 'a';

    // prompt user for input
    cout
        << "Please enter the amount, followed by one of the units listed, for conversion to dollars: \n"
        << "n - Nigerian Nairas b- Ethiopian Birrs c - Cape Verdean Escudos \n"
        << "m - Lesotho Maloti k - Malawian Kwachas l - Libyan Dinars \n"
        << "e - Swazi Emalangeni d - Moroccan Dirhams s - Sierra Leonean Leones \n"
        << "o - Mauritanian Ouguiyas) \n\n";

    // read into objects
    cin >> amount_input >> unit_input;

    // call functions
    // get currency from unit
    Currency notes = char_to_currency(unit_input);
    // get string from currency
    string currency_string = currency_to_string(notes);
    // get rates
    double conversion_rate = get_conversion_rates(notes);

    // check
    cout << unit_input << " " << notes << " " << currency_string << " " << fixed << setprecision(2) << conversion_rate << '\n';

    // condition
    // if ()

    // return statement
    return 0;
}