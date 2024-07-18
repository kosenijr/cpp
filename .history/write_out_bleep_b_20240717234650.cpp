#include "std_lib_facilities.h"

// main function
int main()
{

    // set up two vectors
    // declare primary vector
    vector<string> general;
    // initialize secondary vector
    vector<string> dislike = {"no", "maybe", "unsure", "doubtful"};

    // prompt user for general input
    cout << "Please enter your terms: \n";

    // for-statement for filling general vector
    for (string term; cin >> term;)
    {
        general.push_back(term);
    };

    // sort(general);

    // vectors: check general on dislike
    for (int i = 0; i < general.size(); ++i)
    {
        for (int j = 0; j < dislike.size(); ++j)
        {
            if (general[i] == dislike[i]) {
                general[i] = "BLEEP \n";
            }
            cout << general [i] << '\n';
        }
    }
    // return statement
    return 0;
}