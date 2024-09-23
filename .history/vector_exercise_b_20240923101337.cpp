#include "std_lib_facilities.h"

int main()
{
    // declare a vector
    vector<string> words;
    // create a read loop
    for (string word; cin >> word;)
    {
        words.push_back(word);
    }
    // check out array
    for (int i = 0; i < words.size(); ++i)
    {
        cout << i << '\t' << words[i] << '\n';
    }

    return 0;
}