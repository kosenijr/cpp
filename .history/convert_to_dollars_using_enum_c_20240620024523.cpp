//  include libraries
#include "std_lib_facilities.h"
// add an enum of common terms
enum Currency {
	Nairas, // Nigeria
	Birrs, // Ethiopia
	Escudos, // Cape Verde
	Maloti, // Lesotho 
	Kwachas, // Malawi
	Dinars, // Libya
	Lilangenis, // Swaziland
	Dirhams, // Morocco
	Leones, // Sierra Leone
	Ouguiyas // Mauritania		
}

// function with switch statement for rates
double get_conversion_rates (Currency notes) {
switch(notes) {
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
    case Lilangenis:
    return 17.92;
    case Dirhams:
    return 10.03;
    case Leones:
    return 21580;
    case Ouguiya:
    return 37.52;

}
}

// function with switch statement for enum terms
Currency char_to_currency(char unit) {
switch(unit) {

}
}

// function with switch statement for string terms
string currency_to_string(Currency notes) {
switch(notes) {

}
}

// main function
int main() {
    // initialization

    // prompt user for input

    // read into objects

    // call functions

    // condition

    // return statement
    return 0;
}