#include "std_lib_facilities.h"

int main()
{
    // variables
    // declare the three objects
    int num1, num2, num3;
    // prompt the user the three numbers
    cout << "Please enter three integer values: \n";
    // read user input into the objects
    cin >> num1 >> num2 >> num3;

    // conditionals
    if ((num1 = < num2) && (num1 = < num3) && (num2 = < num3))
    {
        cout << num1 << ", " << num2 << ", " << num3 << "\n";
    }
    else if ((num1 = < num2) && (num1 = < num3) && (num3 = < num2))
    {
        cout << num1 << ", " << num3 << ", " << num2 << "\n";
    }
    else if ((num2 = < num1) && (num2 = < num3) && (num1 = < num3))
    {
        cout << num2 << ", " << num1 << ", " << num3 << "\n";
    }
    else if ((num2 = < num1) && (num2 = < num3) && (num3 = < num1))
    {
        cout << num2 << ", " << num3 << ", " << num1 << "\n";
    }
    else if ((num3 = < num1) && (num3 = < num2) && (num1 = <  num2))
    {
        cout << num3 << ", " << num1 << ", " << num2 << "\n";
    }
    else if ((num3 = < num1) && (num3 = < num2) && (num2 = <  num1))
    {
        cout << num3 << ", " << num2 << ", " << num1 << "\n";
    }
    }
}