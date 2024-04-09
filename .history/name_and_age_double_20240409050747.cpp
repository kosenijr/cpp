// include facilities
#include "std_lib_facilities.h"
// main function: integer return type
int main()
{
    // prompt user to enter informationp
    cout << "Please enter your first and age\n";
    // declaration of first name and age in years
    string first_name;
    int age_years; 
    cin >> first_name >> age_years; // read into first name and age in years": user puts in years.
    int age_months = age_years * 12; // new declaration for age in months.
    cout << "Hello, " << first_name << " (Age: " << age_months << " months old).\n";
    return 0;
} 