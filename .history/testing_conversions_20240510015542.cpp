#include "std_lib_facilities.h"

int main()
{
    char friend_sex = 0;
    char male = "m";
    char female = "f";
    cout << "Please enter the friend_sex of your friend (m/f): \n";
    cin >> friend_sex;
    if (friend_sex == "f") cout << "How is she doing? \n";
    return 0;
}