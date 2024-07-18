#include "std_lib_facilities.h"

// set up two vectors
vector <string> general;
vector <string> dislike;

// prompt user for general input
cout << "Please enter your terms: \n";

// for-statement for filling general vector
for (string term; cin >> term;) {
    general.push_back(term);
};

// 