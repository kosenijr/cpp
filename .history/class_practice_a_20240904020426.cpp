#include "std_lib_facilities.h"

// class implementation
class MyHonda // when using class, no prior parentheses for parameters
{
    // chose to make data public to main function
public:
    // provided typed-attributes
    string Make;
    int Miles;
    string TypeOfTires;
    string Color;
    bool isFourCylinder;
    void getSummary()
    {
        cout
            << "Hi, this is a " << Make << ". \n"
            << "The " << Make << " has " << Miles << "in total. \n"
            << "Noticeably, you will see that the tires are " << TypeOfTires << ". \n"
            << "I cannot end this conversation without noting that the " << Make << " is " << Color << ". \n"
            << "And yes, it is " << isFourCylinder << " that this is a Four-Cylinder. \n";
    }
    // set up constructor: no need for types
    MyHonda(string make, int miles, string typeoftires, string color, bool isfourcylinder)
    {
        Make = make,
        Miles = miles,
        TypeOfTires = typeoftires,
        Color = color,
        isFourCylinder = isfourcylinder,
    }
};

// main
int main()
{
    cout << MyHonda << '\n';

    return 0;
}
