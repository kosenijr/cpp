#include "std_lib_facilities.h"

int main() {
    double miles_input;
    double kilo = 1.609;
    cout << "Please enter the length of miles: \n";
    cin >> miles_input;
    double kilo_output = miles_input * kilo;
    cout << miles_input << " mile(s) is \n" << kilo_output << " kilometers. \n";
}