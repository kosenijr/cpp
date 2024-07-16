#include "std_lib_facilities.h"

int main()
{
    // set up themed vector
    vector<string> terms;
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
        for (int i = 0; i < terms.size(); ++i)
        for (int j = 1; j < term.size(); ++j)
        {
            cout << toupper(term[0]) << terms[j] << '\n';
        }

    // return statement
    return 0;
}