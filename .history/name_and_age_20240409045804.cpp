// include facilities
#include "std_lib_facilities.h"
// main function: integer return type
int main()
{
    // first string output
    cout << "Please enter your first and age\n";
    string first_name;
    int age; 
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (Age " << age << ").\n";
    return 0;
} 