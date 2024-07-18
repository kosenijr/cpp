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

    sort(general);
    // two range-for-loops for comparisons
    for (string i : general)
    {
        for (string j : dislike)
        {
            if (i == j)
                i = "BLEEP";
        }
        cout << i << '\n';
    }

    // return statement
    return 0;
}