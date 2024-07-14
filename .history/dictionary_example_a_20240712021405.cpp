#include "std_lib_facilities.h"

int main()
{
    // set up vector
    vector<string> words;
    // for loop
    for (string term; cin >> term;)
        words.push_back(term);
}