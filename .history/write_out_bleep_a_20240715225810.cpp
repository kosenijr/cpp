//  include facilities
#include "std_lib_facilities.h"
// add functions, if necessary

// main function
int main()
{

    // main-inner
    //  set up vector and initialize an object for comparison
    vector<string> terms;
    const string first_disliked_term = "fiction";
    const string second_disliked_term = "Fiction";
    // prompt user for input
    cout << "Please enter some terms: \n";

    // declare same-typed object as an element for the vector, read into it, then loop
    for (string term; cin >> term;)
    {
        // fs-inner
        //  push the object(s) into the vector
        terms.push_back(term);
    }
    // fs-outer

    // sort through vector
    sort(terms);

    // set up standard for loop
    for (int i = 0; i < terms.size(); ++i)
    {
        // inner
        // conditional
        if (terms[i] == first_disliked_term || terms[i] == second_disliked_term)
        {
            cout << "BLEEP \n";
        }
        else
        {
            cout << terms[i] << '\n';
        }
    }
    // outer

    // return statement
    return 0;
}