#include "std_lib_facilities.h"

int main()
{
	// declare an integer object
	int num_in, num_out;
	// prompt user for input
	cout << "Please enter an integer: \n";
	// read into the integer
	cin >> num_in;

	// second declaration
	num_out = num_in % 2;

	// conditional/output
	if (num_out == 0)
	{
		cout << "The value " << num_in << " is an even number. \n";
	}
	else
	{
		cout << "The value " << num_in << " is an odd number. \n";
	}
	// output
	// cout << num2 << "\n";
}