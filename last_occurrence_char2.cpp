// C++ program to illustrate string::find_last_of
#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

// Driver Code
int main()
{

	// Given String
	string str("Geetanjali Singh is my name!");

	// Character to be found
	char ch = 'i';

	// To store the index of last
	// character found
	size_t found;

	// Position till search is performed
	int pos = 17;

	// Function to find the last
	// character ch in str[0, pos]
	found = str.find_last_of(ch, pos);

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

//Time Complexity of above prog is : O(n) where n is length of a string.
// Auxiliary space is: O(1).
