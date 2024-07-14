#include "std_lib_facilities.h"

int main()
{
    // set up vector
    vector<string> words;
    // prompt users
    cout << "Please enter a few terms: \n";
    // for loop
    for (string term; cin >> term;)
        words.push_back(term);
    // alphabetize
    sort(words);
    // new for loop to remove repetition
    for (int i = 0; i < words.size(); ++i)
    {
        if (i == 0 || words[i - 1] != words[i])
            cout << words[i] << '\n';
    }
}