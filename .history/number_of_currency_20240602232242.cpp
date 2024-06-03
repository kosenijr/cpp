#include "std_lib_facilities.h"

int main()
{
    // declaration of currency objects
    int penny, pennies, nickel, nickels, dime, dimes, quarter, quarters, half_dollar, half_dollars, dollar_coin, dollar_coins;
    // continuously prompt user to provide currency information
    cout << "How many pennies do you have?";
    cin >> pennies;
    cout << "How many nickels do you have?";
    cin >> nickels;
    cout << "How many dimes do you have?";
    cin >> dimes;
    cout << "How many quarters do you have?";
    cin >> quarters;
    cout << "How many half dollars do you have?";
    cin >> half_dollars;
    cout << "How many dollar coins do you have?";
    cin >> dollar_coins;
    // conditions
    // pennies
    if (pennies == 1)
    {
        cout << "You have " << pennies << " penny. \n";
    }
    else if (pennies > 1)
    {
        cout << "You have " << pennies << " pennies. \n";
    }
    else if (nickels == 1)
    {
        cout << "You have " << nickels << " penny. \n";
    }
    else if (nickels > 1)
    {
        cout << "You have " << nickels << " pennies. \n";
    }
    else if (dimes == 1)
    {
        cout << "You have " << dimes << " penny. \n";
    }
    else if (dimes > 1)
    {
        cout << "You have " << dimes << " pennies. \n";
    }
    else if (quarters == 1)
    {
        cout << "You have " << quarters << " penny. \n";
    }
    else if (quarters > 1)
    {
        cout << "You have " << quarters << " pennies. \n";
    }
    else if (half_dollars == 1)
    {
        cout << "You have " << half_dollars << " penny. \n";
    }
    else if (half_dollars > 1)
    {
        cout << "You have " << half_dollars << " pennies. \n";
    }
    else if (dollar_coins == 1)
    {
        cout << "You have " << dollar_coins << " penny. \n";
    }
    else if (dollar_coins > 1)
    {
        cout << "You have " << dollar_coins << " pennies. \n";
    }
    else if (dollar_coins == 1)
    {
        cout << "You have " << nickels << " penny. \n";
    }
    else if (nickels > 1)
    {
        cout << "You have " << nickels << " pennies. \n";
    }
    else if (nickels == 1)
    {
        cout << "You have " << nickels << " penny. \n";
    }
    else if (nickels > 1)
    {
        cout << "You have " << nickels << " pennies. \n";
    }
}