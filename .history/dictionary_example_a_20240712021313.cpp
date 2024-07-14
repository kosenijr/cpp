#include "std_lib_facilities.h"

int main() {
    // set up vector
    vector <string> book;
    // for loop
    for (string term; cin >> term) {
        book.push_back(term);
    }
}