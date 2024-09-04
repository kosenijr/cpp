#include "std_lib_facilities.h"

// class implementation
class MyHonda()
{
    // chose to make data public to main function
public:
    // provided typed-attributes
    string Make;
    int Miles;
    string TypeOfTires;
    string Color;
    bool isFourCylinder;
    // set up constructor
    MyHonda (string make, int miles, string typeoftires, string color, bool isfourcylinder) {
        Make = make,
        Miles = miles,
        TypeOfTires = typeoftires,
        Color = color,
        isFourCylinder = isfourcylinder
    }
}

// main
