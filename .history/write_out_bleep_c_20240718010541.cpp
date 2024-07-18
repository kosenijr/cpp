#include "std_lib_facilities.h"

unordered_map <index_sequence, string> general {
    for (string term; cin >> term;) {
        general.insert(term);
    }
}

int main() {

    cout << general << '\n';
}