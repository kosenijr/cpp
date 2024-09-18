#include "std_lib_facilities.h"

int main()
{
    // declare a few objects
    char char1;
    double init_dbl, chgd_dbl;
    string unit = "";
    // initialize a few objects
    bool first_entry = true;
    // using numeric limits
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();
    // conversion rates
    double cm_to_m_conversion = 1.0 / 100.0;
    double in_to_m_conversion = 2.54 / 100.0;
    double ft_to_m_conversion = 12 * (2.54 / 100.0);

    // set up while statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter a decimal or '|' to exit: \n";

        // inner condition: smallest and largest so far
        // read into inputs by conditions
        if (cin >> init_dbl >> unit)
        {
            // send to the standard output stream
            // cout << "You entered: " << chgd_dbl << " " << unit << '\n';

            if (unit == "m")
            {
                // use init_dbl
                chgd_dbl = init_dbl;
            }
            else if (unit == "cm")
            {
                chgd_dbl = init_dbl * cm_to_m_conversion;
            }
            else if (unit == "in")
            {
                chgd_dbl = init_dbl * in_to_m_conversion;
            }
            else if (unit == "ft")
            {
                chgd_dbl = init_dbl * ft_to_m_conversion;
            }
            else
            {
                // inner condition
                if (unit == "" ||)
                    cout << "This unit is unknown. Please try again. \n";
                continue; // very important for the segue.
            }

            // inner condition: first entry/ smallest and largest so far

            if (first_entry)
            {
                smallest_so_far = chgd_dbl;
                largest_so_far = chgd_dbl;
                first_entry = false;
            }
            else
            {
                // inner conditions if not first_entry, use two if statements, not if-else statement
                if (chgd_dbl < smallest_so_far)
                {
                    smallest_so_far = chgd_dbl;
                }
                if (chgd_dbl > largest_so_far)
                {
                    largest_so_far = chgd_dbl;
                }

                }
            }
            cout
                << "You entered: " << init_dbl << " " << unit << '\n'
                << "Converted: " << dbl_dbl << "m \n"
                << "Smallest so far: " << smallest_so_far << "m \n"
                << "Largest so far: " << largest_so_far << "m \n";
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
    };

    return 0;
}