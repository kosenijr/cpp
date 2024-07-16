#include "std_lib_facilities.h"

int main()
{
    // set up themed vector
    vector<string> terms = {"doll", "right", "glove"};
    // prompt user to input term information
    cout << "Please enter a few terms: \n";
    // for loop to read into individual objects and fill vector
    for (string term; cin >> term;)
    {
        terms.push_back(term);
    }
    // sort and capitalize
    sort(terms);

    // for loop for navigation
    for (int i = 1; i < term.size(); ++i) {
        cout << toupper(term[0]) << terms[i] << '\n';
    }

    // return statement
    return 0;
}