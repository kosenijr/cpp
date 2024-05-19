#include "std_lib_facilities.h"

// This program converts the distance of miles to kilometers.

int main() {
    double miles_input; // use double to also capture decimal-related inputs.
    double miles_to_kilometers = 1.609; // using measurement that was provided and storing in a properly typed object.
    cout << "Please enter the length in miles: "; // prompting
    cin >> miles_input; // reading into a named object for storing mileage
    double kilo_output = miles_input * miles_to_kilometers; // declared an object that stored the conversion for miles to kilometers
    cout << "Approx. " << kilo_output << " kilometers. \n"; // sent conversion to the standard output stream
    return 0; // return statement to indicate success of program
}