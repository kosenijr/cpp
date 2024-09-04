#include "std_lib_facilities.h"

int main() {}
// declare a few objects
char char1;
double init_dbl, chgd_dbl;
string unit = ""
    // initialize a few objects
    bool first_entry = true;
// using numeric limits
double smallest_so_far = numeric_limits<double>::quiet_NaN();
double largest_so_far = numeric_limits<double>::quiet_NaN();
// conversion rates
double cm_to_m_conversion = 1.0 / 100.0;
double in_to_m_conversion = 2.54 / 100.0;
double ft_to_m_conversion = (12 * 2.54) / 100.0;

// set up while statement
while ()
{
    // prompt user for input
    cout << "Please enter a decimal or '|' to exit: \n";
    // read into inputs by conditions
    if (cin >> init_dbl >> unit)
    {
        // send to the standard output stream
        cout << "You entered: " << init_dbl << " " << unit << '\n';
    }
    else
    {
        // clear out standard input stream
        cin.clear();
        // provide new input
        cin >> char1;

        // inner condition
        if (char1 == '|')
        {
            break;
        }
        else
        {
            cout << "This input is unknown. Please try again. \n";
        }
    }
}

return 0;
}