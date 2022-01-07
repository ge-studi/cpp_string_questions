// C++ program to reverse order of words in astring

#include <bits/stdc++.h>
using namespace std;

// Function used to reverse a string
// from index l to r
void reversed(string& s, int l, int r)
{

	while (l < r) {

		// Swap characters at l and r
		swap(s[l], s[r]);
		l++;
		r--;
	}
}

// Function to reverse the given string
string reverseString(string str)
{

	// Add space at the end so that the
	// last word is also reversed
	str.insert(str.end(), ' ');

	int n = str.length();

	int j = 0;

	// Find spaces and reverse all words
	// before that
	for (int i = 0; i < n; i++) {

		// If a space is encountered
		if (str[i] == ' ') {

			// Function call to our custom
			// reverse function()
			reversed(str, j, i - 1);

			// Update the starting index
			// for next word to reverse
			j = i + 1;
		}
	}

	// Remove spaces from the end of the
	// word that we appended
	str.pop_back();

	// Reverse the whole string
	reversed(str, 0, str.length() - 1);

	// Return the reversed string
	return str;
}

// Driver code
int main()
{
	string str = "I like this code";

	// Function call
	string rev = reverseString(str);

	// Print the reversed string
	cout << rev;
	return 0;
}
//Time Complexity: O(N)
// Auxiliary space: O(1)
