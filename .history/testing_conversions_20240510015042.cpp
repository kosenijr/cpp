#include "std_lib_facilities.h"

int main()
{
    char sex = "m";
    cout << "Please enter the sex of your friend (m/f): \n";
    cin >> sex;
    if (sex == "f") cout << "How is she doing? \n";
    return 0;
}