// drills
#include "std_lib_facilities.h"

int main()
{
    // variables
    string first_name;
    string friend_name;
    char friend_sex = 0;
    int age;

    // inputs
    cout << "Enter the name of the person you want to write to: \n";
    cin >> first_name;
    cout << "Enter the name of a friend you'd like to ask about in the letter: \n";
    cin >> friend_name;
    cout << "Enter the sex of your friend (m/f): \n";
    cin >> friend_sex;
    cout << "Enter the age of the letter's recipient: \n";
    cin >> age;

    // outputs
    cout << "  Dear " << first_name << ", \n";
    cout << "  How are you? I am fine. I miss you. "
         << "Remember that party that we attended with " << friend_name << "? \n"
         << "Yeah ... I will never forget. We should have got together after that event! \n";
    cout << "By the way, how is " << friend_name << "? \n";
    if (friend_sex == 'm') // single quotes for char; double for string
    {
        cout <<"If you see " << friend_name << " again, please ask him to call me! \n";
    }
    if (friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " again, please ask her to call me! \n";
    };
    cout << "I hear you just had a birthday and you are " << age << " years old. \n";
    if (110 >= age >= 0)
    {
        simple_error("you're kidding!");
        cout << "No way, blessings!" << "\n"; 
    }
    if (age < 12)
    {
        cout << "Next year you will be " << age + 1 << ". \n\n";
    }
    if (age == 17)
    {
        cout << "Next year you will be able to vote!" << "\n\n";
    };
    if (age > 70)
    {
        cout << "I hope you are enjoying retirement!" << "\n\n";
    }
    cout << "  Yours Sincerely, \n\n\n"
         << "  Kayode Oseni \n";

    return 0;
}
