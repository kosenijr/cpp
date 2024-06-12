// inclusion of facilities
#include "std_lib_facilities.h"

// make a class with variety
class Variety
{
    // select public option for main-function accessibility
public:
    // declare seven objects
    int var1;
    double var2;
    string var3;
    char var4;
    float var5;
    bool var6;
    int var7;
    // call class and declare parameters
    Variety(int a, double b, string c, char d, float e, bool f, int g)
    {
        // object-parameter assignments
        var1 = a;
        var2 = b;
        var3 = c;
        var4 = d;
        var5 = e;
        var6 = f;
        var7 = g;
    };
};

// make main function
int main()
{
    // create an object from Variety class
    Variety obj_of_vars(8, 9.34586, "Muni Long", 'a', 8.4568, true, 5);
    cout
        << "var1: " << obj_of_vars.var1 << "\n"
        << "var2: " << obj_of_vars.var2 << "\n"
        << "var3: " << obj_of_vars.var3 << "\n"
        << "var4: " << obj_of_vars.var4 << "\n"
        << "var5: " << obj_of_vars.var5 << "\n"
        << "var6: " << obj_of_vars.var6 << "\n"
        << "var7: " << obj_of_vars.var7 << "\n";

    // return statement
    return 0;
}
}
;