#include "std_lib_facilities.h"

int main()
{
    int number_of_words = 0;
    string previous = " ";
    string current;
    while (cin >> current)
    {
        ++number_of_words;
        if (previous == current)
            cout << "word number " << number_of_words << " repeated: " << current << '\n';
        previous = current;
    }
}

// input: She she laughed He He He because what he did did not look look very very good good

// output:
// word number 5 repeated: He
// word number 6 repeated: He
// word number 11 repeated: did
// word number 14 repeated: look
// word number 16 repeated: very
// word number 18 repeated: good