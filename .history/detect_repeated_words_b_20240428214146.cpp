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

// How many repeated words were there? Why?
// There were six repeated words because He was repeated twice so it counts as two repeated instances. Also, some words (she and he) did not match because of their cases.

// What is the definition of "word" used here?
// A word is a term that consists of two of more letters arranged in any case that is not a special character, nor composed of special characters.

// What is the definition of repeated word? (For example, is "She" and "she" a repetition?)
// A repeated word is a term that matches the exact spelling and case of another term.