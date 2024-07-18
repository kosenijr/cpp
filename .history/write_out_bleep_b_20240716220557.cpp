#include "std_lib_facilities.h"

int main()
{
    // set up two vectors
    vector<string> general_terms;
    vector<string> disliked_terms = {"ate", "red", "apple"};

    // prompt user for input
    cout << "Please enter your terms: \n";

    // // prompt user for disliked terms: general_terms
    // cout << "Please enter the terms that you'd prefer not to see: \n";

    // for-statement to store input
    for (string general_term; cin >> general_term;)
    {
        general_terms.push_back(general_term);
    };

    // // for-statement for storing input: disliked_terms
    // for (string disliked_term; cin >> disliked_term;) {
    //     disliked_terms.push_back(disliked_term);
    // };

    sort(general_terms);

    // standard for-statement for comparisons
    for (int i = 0; i < general_terms.size(); ++i)
    {
        if (general_terms[i] == disliked_term[i])
        {
            cout << "BLEEP \n";
        }
        else
        {
            cout << general_terms[i] << '\n';
        }
    }
    // return statement
    return 0;
}