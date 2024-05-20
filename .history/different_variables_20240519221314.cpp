#include "std_lib_facilities.h" // header includes provided library of terms

int main() // main function has a type that will return an integer upon success
{
    // illegal objects
    char character = 'a';     // will change variable to "character" since string object conflicts with string type below.
    int two_way_street = 9;   // will change from "2_way_street" to two_way_street
    string fast = "Race Car"; // will change from "FAST" to "fast" to avoid capitalization.
    double int3g3r = 3.56;
    bool _boolean = true;

    // legal objects
    char last_letter = 'z';
    int first_number = 1;
    string shaft = "Black Hero";
    double pi = 3.141592653589793238462643383279502884197;
    bool what_is_love = true;

    // result
    cout
        << "List of illegal names: \n";
    << "character: " << character << "\n";
    << "two_way_street: " << two_way_street << "\n";
    << "fast: " << fast << "\n";
    << "int3ger: " << int3ger << "\n";
    << "_boolean: " << _boolean << "\n";

            << "List of legal names: \n\n";
    << "last_letter: " << last_letter << "\n";
    << "first_number: " << first_number << "\n";
    << "shaft: " << shaft << "\n";
    << "pi: " << pi << "\n";
    << "what_is_love: " << what_is_love << "\n";


    // return statement
    return 0;
}