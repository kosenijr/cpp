#include "std_lib_facilities.h"

int main()
{
    // declare two objects with int type
    int val1, val2;
    // prompting for two integers
    cout << "Please enter two values that are integers: \n";
    // read into the two integers, respectively
    cin >> val1 >> val2;
    // calculate the greated common denominator
    int divisor = gcd(val1, val2);
    int val1_simplified = val1/divisor;
    int val2_simplified = val2/divisor;
    

    // manipulations
    // smaller and larger
    if (val1 < val2)
    {
        cout
            << "The smaller number: " << val1 << "\n"
            << "The larger number: " << val2 << "\n"
            << "The difference: " << val2 - val1 << "\n"
            << "The product: " << val1 * val2 << "\n"
            << "The ratio: " <<  << "\n";
    }
    else
    {
        cout
            << "The smaller number: " << val2 << "\n"
            << "The larger number: " << val1 << "\n";
    };

    int greater_than;
    int find_diff;
    int find_prod;
    int find_ratio;

    // cout
    // << "The smaller number: " << less_than << "\n";
    // << "The larger number: " << greater_than << "\n";
    // << "The difference: " << find_diff << "\n";
    // << "The product: " << find_prod << "\n";
    // << "The ratio: " << find_ratio << "\n";
}