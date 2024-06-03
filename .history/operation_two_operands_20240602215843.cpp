#include "std_lib_facilities.h"

int main()
{
	// declare string and double-typed objects;
	string operation;
	double num1, num2;
	// prompt user to enter for input
	cout << "Please enter an operation with the symbol or name of the operator first before the two variables: \n";
	cin >> operation >> num1 >> num2;
	// conditional
	if (operation == "plus" || operation == "+")
	{
		cout << num1 + num2 << "\n";
	}
	else if (operation == "minus" || operation == "-")
	{
		cout << num1 - num2 << "\n";
	}
	else if (operation == "mul" || operation == "*")
	{
		cout << num1 * num2 << "\n";
	}
	else if (operation == "div" || operation == "/")
	{
		cout << num1 / num2 << "\n";
	}
	else
	{
		cout << "I do not know that operation. \n";
	};

	return 0;
}