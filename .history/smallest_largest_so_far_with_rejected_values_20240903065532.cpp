/*
Reject values without units or with "illegal" representations of units,
such as y, yard, meter, km, and gallons.
*/

#include "std_lib_facilities.h"

int main()
{
    // declare objects
    char char1;
    double unconverted_dbl, converted_dbl;
    string unit = "";
    // initialize objects
    bool first_entry = true;
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();
    // store conversion rates
    double cm_rate = 100;
    double in_rate = 2.54 / 100;
    double ft_rate = 12 * (2.54 / 100);

    // set up while-statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter a decimal or '|' to exit: \n";

        // // test
        // cin >> unit;

        // ensure unit remains lowercase: auto means/range-for-loop
        for (auto &c : unit)
        {
            c = tolower(c);
        }

        // cout << unit << '\n';

        // set up conversion conditions
        if (cin >> unconverted_dbl >> unit)
        {
            // Meters will be the final conversion unit
            // cout << dbl1 << " " << unit << ". \n";
            // smallest and largest so far conditions with conversions
            if (unit == "m")
            {
                converted_dbl = unconverted_dbl;
            }
            else if (unit == "cm")
            {
                converted_dbl = unconverted_dbl / cm_rate;
            }
            else if (unit == "in")
            {
                converted_dbl = unconverted_dbl * in_rate;
            }
            else if (unit == "ft")
            {
                converted_dbl = unconverted_dbl * ft_rate;
            }
            else
            {

                // inner condition
                if (unit == "" || unit == "y" || unit == "yard" || unit == "meter" || unit == "km" || unit == "gallons")
                {
                    cout << "This unit is no good. Please use an accepted unit. \n";
                }
                else
                {
                    cout << "This measurement is unknown. Please use an available unit. \n";
                    continue; // adding continue to segue to asking for next input.
                }
            }
            // cout
            // << "You entered: " << unconverted_dbl << unit << ". \n"
            // << "Your conversion: " << fixed << setprecision(2) << converted_dbl << unit << ". \n";

            // continue with smallest or largest so far
            if (first_entry)
            {
                smallest_so_far = converted_dbl;
                largest_so_far = converted_dbl;
                first_entry = false; // turn first_entry off
            }
            else
            {
                // inner conditions
                if (converted_dbl < smallest_so_far)
                {
                    smallest_so_far = converted_dbl;
                }
                if (converted_dbl > largest_so_far)
                {
                    largest_so_far = converted_dbl;
                }
            }

            // check
            cout
                << "You entered: " << unconverted_dbl << unit << ". \n"
                << "Your conversion: " << fixed << setprecision(2) << converted_dbl << "m.\n"
                << "Smallest so far: " << fixed << setprecision(2) << smallest_so_far << "m.\n"
                << "Largest so far: " << fixed << setprecision(2) << largest_so_far << "m.\n";
        }
        else
        {
            // clear out standard input stream
            cin.clear();
            // change type for reading
            cin >> char1;
            // set up inner condition
            if (char1 == '|')
            {
                break;
            }
            else
            {
                cout << "Try again! \n";
            }
        }
    }
    return 0;
}

/*
Notes
- the utilization of 'continue' can be effective in a loop and there is a need to control the flow of the program by skipping to the next iteration.
*/