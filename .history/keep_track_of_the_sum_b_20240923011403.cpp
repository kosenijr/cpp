#include "std_lib_facilities.h"

int main()
{
    // declarations
    char char1;
    double init_dbl, chgd_dbl;
    vector<double> unsorted_values;

    // initialize general objects
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();
    string unit = "";
    bool first_entry = true;

    // initialize unit conversions
    double cm_to_m_conversion = (1.0 / 100.0);
    double in_to_m_conversion = (2.54) * (1.0 / 100.0);
    double ft_to_m_conversion = (12) * (2.54) * (1.0 / 100.0);

    // initialize sums
    double sum_of_values = 0.00;
    double sum_of_small_values = 0.00;
    double sum_of_large_values = 0.00;
    int number_of_values = 0;

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
                    cout << "This unit is unavailable. Please select one of the mentioned units. \n";
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
                sum_of_small_values = smallest_so_far;
                sum_of_values = smallest_so_far;

                largest_so_far = chgd_dbl;
                sum_of_large_values = largest_so_far;
                sum_of_values += largest_so_far;

                first_entry = false;
            }
            else
            {
                if (chgd_dbl < smallest_so_far)
                {
                    smallest_so_far = chgd_dbl;
                    sum_of_small_values += smallest_so_far;
                    sum_of_values += smallest_so_far;
                }
                if (chgd_dbl > largest_so_far)
                {
                    largest_so_far = chgd_dbl;
                    sum_of_large_values += largest_so_far;
                    sum_of_values += largest_so_far;
                }
            }

            number_of_values++;
            unsorted_values.push_back(chgd_dbl);

            // separate standard output stream for array: range-for-loop
            cout
                << "You entered: " << init_dbl << unit << '\n'
                << "Your conversion: " << chgd_dbl << "m \n"
                << "Smallest so far: " << smallest_so_far << "m \n"
                << "Largest so far: " << largest_so_far << "m \n"
                << "Sum of Small Values: " << sum_of_small_values << '\n'
                << "Sum of Large Values: " << sum_of_large_values << '\n'
                << "Sum of Values: " << sum_of_values << '\n'
                << "Number of Values: " << number_of_values << '\n';
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
                // unsorted values
                cout << "Values Unsorted: \n";
                for (double values : unsorted_values)
                {
                    cout
                        << values << '\n';
                };
                // sorted values
                sort(unsorted_values);
                cout << "Values Unsorted: \n";
                // pushing sorted values into proper vector
                for (double values : unsorted_values)
                {
                    cout
                        << "Sorted Values: " << values << '\n';
                }
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