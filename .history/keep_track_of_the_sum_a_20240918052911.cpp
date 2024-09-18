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
    
}