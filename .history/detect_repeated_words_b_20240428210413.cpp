#include "std_lib_facilities.h"

int main()
{
    string previous = " ";
    // box contains whitespace
    string current;
    // declaration of current as a string;
    while (cin >> current)
    {
        if (previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}

// input: She she laughed He He He because what he did did not look look very very good good.

// output:
// repeated word: He
// repeated word: He
// repeated word: did
// repeated word: look
// repeated word: very
// repeated word: good