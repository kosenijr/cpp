#include "std_lib_facilities.h"

int main() {
    // declarations
    char char1;
    double init_dbl, chgd_dbl;

    // initialize general objects
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();
    string unit = "";
    bool first_entry = true;

    // initialize unit conversions
    double cm_to_m_conversion = (1.0/100.0);
    double in_to_m_conversion = (2.54) * (1.0/100.0);
    double ft_to_m_conversion = (12) * (2.54) * (1.0/100.0);

    // set up while statement
    while (true) {
        // user prompt
        cout 
        << "Please enter a decimal and unit or enter '|' to exit program: \n"
        << "(The units available are m - meters, cm - centimeters, in - inches, and ft - feet) \n";

        // set up condition
        if (cin >> init_dbl >> unit) {
            cout << init_dbl << unit << '\n';
            
        } else {
            // clear out standard input stream
            cin.clear();
            // change the expected type for this input stream
            cin >> char1;
            // set up condition
            if (char1 == '|') {
                // exit
                break;
            } else {
                cout << "You entered an incorrect character. Please try again. \n";
            }
        }

    };

    return 0;
}