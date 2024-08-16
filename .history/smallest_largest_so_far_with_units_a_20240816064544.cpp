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
    double before_conversion, after_conversion;
    string unit;
    // initialize objects
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
        // set up conditions
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
            cout
            << "You entered: " << before_conversion << unit << ". \n"
            << "Your conversion: " << after_conversion << unit << ". \n";
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