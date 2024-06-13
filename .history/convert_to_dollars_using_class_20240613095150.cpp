#include "std_lib_facilities.h"

// declare a class
class GlobalClass
{
	// implement public feature for main-function access
public:
	double naira;
	double yen;
	double kroner;
	double pounds;
	// call class and make assignments
	GlobalClass(double w, double x, double y, double z)
	{
		naira = w;
		yen = x;
		kroner = y;
		pounds = z;
	};
};

// main function
int main()
{
	// initialize two objects
	double amount_input = 1;
	char unit = ' ';

	// prompt user for currency input
	cout
		<< "Please enter the currency amount (X) for conversion to dollars based on our conversion options \n"
		<< "(Xn - Naira, Xy - Yen, Xk - Kroner, Xp - Pounds): \n";

	// read into standard output stream
	cin >> amount_input >> unit;

	GlobalClass rate_per_dollar{0.00066, 0.0064, 0.093, 1.27}; // based on 06/11/2024 exchange rates.
	//	cout << rate_per_dollar.yen << ", " << rate_per_dollar.kroner << ", and " << rate_per_dollar.pounds << " are the exchange rates for yen, kroner, and pounds respectively.";

	// conditional
	if (unit == 'n')
	{
		cout << "Your amount of " << fixed << setprecision(2) << amount_input << " naira, is " << fixed << setprecision(2) << amount_input * rate_per_dollar.naira << " in dollars. \n";
	}
	else if (unit == 'y')
	{
		cout << "Your amount of " << fixed << setprecision(2) << amount_input << " yen, is " << fixed << setprecision(2) << amount_input * rate_per_dollar.yen << " in dollars. \n";
	}
	else if (unit == 'k')
	{
		cout << "Your amount of " << fixed << setprecision(2) << amount_input << " kroner, is " << fixed << setprecision(2) << amount_input * rate_per_dollar.kroner << " in dollars. \n";
	}
	else if (unit == 'p')
	{
		cout << "Your amount of " << fixed << setprecision(2) << amount_input << " pounds, is " << fixed << setprecision(2) << amount_input * rate_per_dollar.pounds << " in dollars. \n";
	}
	else
	{
		// send message of unfamiliarity to standard output stream
		cout << "That option is not a currency in the system. \n";
	};
}