// drills
#include "std_lib_facilities.h"

int main()
{
    // variables
    string first_name;
    string friend_name;
    char friend_sex = 0;
    string = y;
    char friend = y;
    // inputs
    cout << "Enter the name of the person you want to write to: \n";
    cin >> first_name;
    cout << "Enter the name of a friend you'd like to ask about in the letter: \n";
    cin >> friend_name;
    cout << "Please press 'm' if this friend is a male or 'f' if this is a female: \n";
    cin >> friend_sex;
    // outputs
    cout << "  Dear " << first_name << ", \n";
    cout << "  How are you? I am fine. I miss you. "
         << "Remember that party that we attended with Whoopi Goldberg? \n"
         << "Yeah ... I will never forget. We should have asked her about Sister Act! \n";
    cout << "I have been meaning to ask you about " << friend_name << ". \n";
    cout << friend_sex << "\n";
    if (friend_sex == "m")
    {
        cout << "How is he doing? If you see " << friend_name << " again, please let him know that I asked of him. \n";
    }
    if (friend_sex == "f")
    {
        cout << "How is she doing? If you see " << friend_name << " again, please let him know that I asked of him. \n;"
    };
    return 0;
}
