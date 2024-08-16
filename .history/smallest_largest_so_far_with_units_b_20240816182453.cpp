/*
Add a unit to each double entered; that is, enter values such as
10cm, 2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft.
Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft ==
12in. Read the unit indicator into a string. You may consider 12 m
(with a space between the number and the unit) equivalent to 12m
(without a space).
*/

#include "std_lib_facilities.h"

int main()
{
    // declare objects
    char char1;
    double not_converted_dbl, converted_dbl;
    string unit;
    // initialize objects
    bool first_entry = true;
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();

    // set up while-statement
    while (true)
    {
        // prompt user for input
        cout << "Please enter a decimal or '|' to exit: \n";

        // // test
        // cin >> unit;

        // ensure unit remains lowercase: auto means/range-for-loop
        for (auto &c : unit) { c = tolower(c); }

        // cout << unit << '\n';

        // set up conversion conditions
                if (cin >> before_conversion >> unit)
        {
            // Meters will be the final conversion unit
            // cout << dbl1 << " " << unit << ". \n";
            // smallest and largest so far conditions with conversions
            if (unit == "m")
            {
                after_conversion = before_conversion;
            }
            else if (unit == "cm")
            {
                after_conversion = before_conversion / cm_rate;
            }
            else if (unit == "in")
            {
                after_conversion = before_conversion * in_rate;
            }
            else if (unit == "ft")
            {
                after_conversion = before_conversion * ft_rate;
            }
            else
            {
                cout << "This measurement is unknown. Please use an available unit. \n";
            }
            // cout
            // << "You entered: " << before_conversion << unit << ". \n"
            // << "Your conversion: " << fixed << setprecision(2) << after_conversion << unit << ". \n";

            // continue with smallest or largest so far
            if (isnan(smallest_so_far) && isnan(largest_so_far))
            {
                smallest_so_far = after_conversion;
                largest_so_far = after_conversion;
            }
            else if (after_conversion < smallest_so_far)
            {
                smallest_so_far = after_conversion;
            }
            else if (after_conversion > largest_so_far)
            {
                largest_so_far = after_conversion;
            }
            else
            {
                cout << "These values are equal. \n";
            }

            // check
            cout
                << "You entered: " << before_conversion << unit << ". \n"
                << "Your conversion: " << fixed << setprecision(2) << after_conversion << "m.\n"
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
        return 0;

    }
}