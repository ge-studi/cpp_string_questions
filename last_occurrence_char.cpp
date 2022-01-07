// C++ program to illustrate string::find_last_of
#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

// Driver Code
int main()
{

	// Given String
	string str("Welcome to world of programming!");

	// Character to be found
	char ch = 'e';

	// To store the index of last
	// character found
	size_t found;

	// Function to find the last
	// character ch in str
	found = str.find_last_of(ch);

	// If string doesn't have
	// character ch present in it
	if (found == string::npos) {
		cout << "Character " << ch
			<< " is not present in"
			<< " the given string.";
	}

	// Else print the last position
	// of the character
	else {
		cout << "Character " << ch
			<< " is found at index: "
			<< found << endl;
	}
}
