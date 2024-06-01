#include "std_lib_facilities.h"

int main()
{
	string str_in; // declare a string-type object
	// promp user to spell out a number
	cout << "Please write out a number from 0-4: \n";
	cin >> str_in; // read into the object
	// implement if/else statement
	if (str_in == "zero")
	{
		cout << "Your number: " << 0 << ". \n";
	}
	else if (str_in == "one")
	{
		cout << "Your number: " << 1 << ". \n";
	}
	else if (str_in == "two")
	{
		cout << "Your number: " << 2 << ". \n";
	}
	else if (str_in == "three")
	{
		cout << "Your number: " << 3 << ". \n";
	}
	else if (str_in == "four")
	{
		cout << "Your number is " << 4 << ". \n";
	}
	else
	{
		cout << "Not a number I know. \n";
	};

	return 0;
}