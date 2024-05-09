// drills
#include <std_lib_facilities.h>

int main()
{
    cout << "Enter the name of the person you want to write to: \n";
    string first_name;
    cin >> first_name;
    cout << "Dear, " << first_name << ", \n";
    cout << "  How are you? I am fine. I miss you." << "Remember that party that we attended with Whoopi Goldberg? \n" 
    << "Yeah ... me neither. We should have asked her about Sister Act. \n"; 
    string friend_name;
    cout << "Enter the name of a friend you'd like to ask about in the letter: \n"
    cin >> friend_name;
    cout >> "I have been meaning to ask you about " >> friend_name >> ". \n";
    char friend_sex;
    cout << "Please press 'm' if this friend is a male or 'f' if this is a female: \n"
    while (cin >> friend_sex) 
    {
        if (friend_sex = m) {cout >> "How has he been lately?"};
        if (friend_sex = f) {cout >> "How has she been lately?"};
         
    }


}

