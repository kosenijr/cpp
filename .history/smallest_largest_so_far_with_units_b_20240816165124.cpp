/*
Add a unit to each double entered; that is, enter values such as
10cm, 2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft.
Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft ==
12in. Read the unit indicator into a string. You may consider 12 m
(with a space between the number and the unit) equivalent to 12m
(without a space).
*/

#include "std_lib_facilities.h"

int main() {
    // declare objects
    char char1;
    double not_converted_dbl, converted_dbl;
    // initialize objects
    bool first_entry = true;
    double smallest_so_far = numeric_limits<double>::quiet_NaN();
    double largest_so_far = numeric_limits<double>::quiet_NaN();
}