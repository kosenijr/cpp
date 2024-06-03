#include "std_lib_facilities.h"

int main()
{
    // declaration of currency objects
    int penny, pennies, nickel, nickels, dime, dimes, quarter, quarters, half_dollar, half_dollars, dollar_coin, dollar_coins;
    // continuously prompt user to provide currency information
    cout << "How many pennies do you have? \n";
    cin >> pennies;
    cout << "How many nickels do you have? \n";
    cin >> nickels;
    cout << "How many dimes do you have? \n";
    cin >> dimes;
    cout << "How many quarters do you have? \n";
    cin >> quarters;
    cout << "How many half dollars do you have? \n";
    cin >> half_dollars;
    cout << "How many dollar coins do you have? \n";
    cin >> dollar_coins;
    // conditions: currencies
    // penny/pennies
    if (pennies == 1)
    {
        cout << "You have " << pennies << " penny. \n";
    }
    else if (pennies > 1)
    {
        cout << "You have " << pennies << " pennies. \n";
    };
    // nickel/nickels
    if (nickels == 1)
    {
        cout << "You have " << nickels << " nickel. \n";
    }
    else if (nickels > 1)
    {
        cout << "You have " << nickels << " nickels. \n";
    }
    // dime/dimes
    if (dimes == 1)
    {
        cout << "You have " << dimes << " dime. \n";
    }
    else if (dimes > 1)
    {
        cout << "You have " << dimes << " dimes. \n";
    };
    // quarter/quarters
    if (quarters == 1)
    {
        cout << "You have " << quarters << " quarter. \n";
    }
    else if (quarters > 1)
    {
        cout << "You have " << quarters << " quarters. \n";
    };
    // half dollar/half dollars
    if (half_dollars == 1)
    {
        cout << "You have " << half_dollars << " half dollar. \n";
    }
    else if (half_dollars > 1)
    {
        cout << "You have " << half_dollars << " half dollars. \n";
    };
    // dollar coin/dollar coins
    if (dollar_coins == 1)
    {
        cout << "You have " << dollar_coins << " dollar coin. \n";
    }
    else if (dollar_coins > 1)
    {
        cout << "You have " << dollar_coins << " dollar coins. \n";
    }
    // provide total amount of coins to standard output stream
}