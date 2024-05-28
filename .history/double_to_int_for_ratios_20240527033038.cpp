#include "std_lib_facilities.h"

#include <iostream>
#include <string>
using namespace std;

int countDigitsAfterDecimal(const string &number)
{
    size_t decimalPos = number.find('.');
    if (decimalPos == string::npos)
    {
        // No decimal point found, return 0
        return 0;
    }

    int digitCount = 0;
    for (size_t i = decimalPos + 1; i < number.length(); ++i)
    {
        if (isdigit(number[i]))
        {
            digitCount++;
        }
    }
    return digitCount;
}

int main()
{
    string number;
    cout << "Enter a decimal number: ";
    cin >> number;

    int numDigitsAfterDecimal = countDigitsAfterDecimal(number);
    int numAfterDecimal = number * pow(1, countDigitsAfterDecimal(number));
    cout << "The number of digits after the decimal point is: " << numDigitsAfterDecimal << endl;

    return 0;
}