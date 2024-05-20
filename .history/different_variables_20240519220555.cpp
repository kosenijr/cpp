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
    bool love = true;

    // result

    // return statement
    return 0;
}