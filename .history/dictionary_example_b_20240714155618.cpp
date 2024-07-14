#include "std_lib_facilities.h"

int main()
{
	// set up vector
	vector<string> books;

	// prompt user
	cout << "Please enter some words: \n";

	// for-statement for input
	for (string word; cin >> word;)
	{
		// insert into vector
		books.push_back(word);
	}

	// alphabetize the entries
	sort(books);

	// space out items
	cout << '\n';

	// no repeats: exp
	// use for-statement
	for (int i = 0; i < books.size(); ++i)
	{
		// conditional
		// if statement does not transcend the range of entries, thus preventing an error (runtime).
		if (i == 0 || books[i - 1] != books[i]) // either zero or compares each element until the last item.
		{
			cout << books[i] << '\n';
		};
	};
	// return statement
	return 0;
}