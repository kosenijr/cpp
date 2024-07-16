#include "std_lib_facilities.h"

int main()
{
    // set up themed vector
    vector<string> states;
    // prompt user to input state information
    cout << "Please enter a few states: \n";
    // for loop to read into individual objects and fill vector
    for (string state; cin >> state;)
    {
        states.push_back(state);
    }
    // sort and capitalize
    sort(states);

    // for loop for navigation
    for (string i: states) {
        cout >> i >> '\n';
    }

    // return statement
    return 0;
}