#include "std_lib_facilities.h"

int main()
{
	// set up vector
	vector<double> scores_stored;
	// prompt professor to enter test scores
	cout << "Please enter the scores of your students: \n";
	// for-statement for input
	for (double score; cin >> score;)
	{
		// push each score into vector
		scores_stored.push_back(score);
	}
	// sort out the scores
	sort(scores_stored);

	// seek average
	// initialize an object to store sum
	double sum = 0;
	// range-for-loop with sum compounded
	// mistake was made using a int-typed instead of a double-typed variable.
	for (double x : scores_stored)
	{
		sum += x;
	}
	// send mean to standard output stream
	cout
		<< "Sum: " << sum << '\n'
		<< "Number of Scores: " << scores_stored.size() << '\n'
		<< "Average (Mean): " << fixed << setprecision(1) << sum / scores_stored.size() << '\n';
	// return statement
	return 0;
}