// include facilities
#include "std_lib_facilities.h"
// main function: integer return type
int main()
{
    // prompt user to enter name and age
    cout << "Please enter your first and age\n";
    // declare variables for first name and age
    string first_name;
    double age; 
    cin >> first_name >> age; // read into first name and age: user puts in years.
    cout << "Hello, " << first_name << " (Age: " << age << "years old).\n";
    return 0;
} 