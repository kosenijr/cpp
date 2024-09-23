#include "std_lib_facilities.h"

int main()
{
    // declarations
    char char1;
    double init_dbl, chgd_dbl;

    // initialize general objects
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();
    string unit = "";
    bool first_entry = true;

    // initialize unit conversions
    double cm_to_m_conversion = (1.0 / 100.0);
    double in_to_m_conversion = (2.54) * (1.0 / 100.0);
    double ft_to_m_conversion = (12) * (2.54) * (1.0 / 100.0);

    // set up while statement
    while (true)
    {
        // user prompt
        cout
            << "Please enter a decimal and unit or enter '|' to exit program: \n"
            << "(Available units: m - meters, cm - centimeters, in - inches, and ft - feet) \n";

        // set up first inner condition
        if (cin >> init_dbl >> unit)
        {
            // set up conversions
            if (unit == "m")
            {
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
                if (unit == "" || unit == "y" || unit == "yard" || unit == "yards" || unit == "meter" || unit == "meters" || unit == "km" || unit == "gallon" || unit == "gallons")
                {
                    cout << unit << " is not one of the units available. Please select an available unit.";
                    continue;
                }
                else
                {
                    cout << "This unit is not recognized. Please try again. \n";
                    continue;
                }
            }
            // set up second inner condition
            if (first_entry)
            {
                smallest_so_far = chgd_dbl;
                largest_so_far = chgd_dbl;
                first_entry = false;
            }
            else
            {
                if (chgd_dbl < smallest_so_far)
                {
                    smallest_so_far = chgd_dbl;
                }
                if (chgd_dbl > largest_so_far)
                {
                    largest_so_far = chgd_dbl;
                }
            }
            cout
                << "You entered: " << init_dbl << unit << '\n'
                << "Your conversion: " << chgd_dbl << "m \n"
                << "Smallest so far: " << smallest_so_far << "m \n"
                << "Largest so far: " << largest_so_far << "m \n";
        }
        else
        {
            // clear out standard input stream
            cin.clear();
            // change the expected type for this input stream
            cin >> char1;
            // set up condition
            if (char1 == '|')
            {
                // exit
                break;
            }
            else
            {
                cout << "You entered an incorrect character. Please try again. \n";
            }
        }
    }

    return 0;
}