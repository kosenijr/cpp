#include "std_lib_facilities.h"

// function double_to_string
// double double_count (double dbl)
// {
//     // create a vector
//     vector<double> numbers;
//     // push dbl into vector;
//     numbers.push_back(dbl);
// }

int main() {
    // Step 1: Initialize the vector with a single double value
    vector<double> doubleVec = {45.23243};
    
    // Step 2: Convert the double to a string
    string numberStr = to_string(doubleVec[0]);
    
    // Step 3: Initialize a vector<char> to store the individual characters
    vector<char> charVec;
    
    // Step 4: Iterate through the string and push each character into the vector
    for(char c : numberStr) {
        charVec.push_back(c);
    }
    
    // Step 5: Print the resulting vector of characters
    for(char c : charVec) {
        cout << c << ' ' << charVec.size() ;
    }
    cout << endl;
    
    return 0;
}