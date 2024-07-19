#include "std_lib_facilities.h"

int main()
{
    // set up vector
    vector<string> general;
    // set up unordered map
    unordered_map<string, string> dislike = {
        {"no", "BLEEP"},
        {"maybe", "BLEEP"},
        {"unsure", "BLEEP"},
        {"not", "BLEEP"},
        {"doubtful", "BLEEP"},
        {"negative", "BLEEP"}
    };

    // prompt user for input
    cout << "Please enter your terms: \n";

    // for-statement for reading into each element and filling up vector
    for (string term; cin >> term;) {
        general.push_back(term);
    };

    sort the vector
    sort(general.begin(), general.end());

}