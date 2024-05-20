#include "std_lib_facilities.h"

int main()
{
    // declare two objects with int type
    int val1, val2;
    // prompting for two integers
    cout << "Please enter two values that are integers: \n";
    // read into the two integers, respectively
    cin >> val1 >> val2;

    // manipulations
    if (val1 < val2)
    {
        cout << "The smaller number: " << val1 << "\n";
        << "The larger number: " << val2 << "\n";
    }
    else
    {
        cout << "The smaller number: " << val2 << "\n";
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