#include "std_lib_facilities.h"

// set up two vectors
// declare primary vector
vector <string> general_term;
// initialize secondary vector
vector <string> dislike = {"no", "maybe", "unsure", "doubtful"};

// prompt user for general_term input
cout << "Please enter your terms: \n";

// for-statement for filling general_term vector
for (string term; cin >> term;) {
    general_term.push_back(term);
};

sort(general_term);

// vectors: check general_term on dislike
for (string i : dislike) {
    cout << i << "\n";
}