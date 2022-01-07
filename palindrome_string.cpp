// C++ program to check whether string is palindrome or not.
#include <bits/stdc++.h>
using namespace std;

// Function to check whether
// the string is palindrome
string isPalindrome(string S)
{
	// Stores the reverse of the
	// string S
	string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	// If S is equal to P
	if (S == P) {
		// Return "Yes"
		return "Yes";
	}
	// Otherwise
	else {
		// return "No"
		return "No";
	}
}

// Driver Code
int main()
{
	string S1 = "ABCDCBA";
    cout<<"Output to check whether string is palindrome or not"<<endl;
	cout << isPalindrome(S1);

    string S2 = "GeeksforGeeks";
    cout<<"\nOutput to check whether string is palindrome or not"<<endl;
	cout << isPalindrome(S2);

	return 0;
}

// time complexity of above program is O(n).
// Auxiliary space is O(n).
// NOTE -  In this program do not use iostream header file otherwise reverse function will show an error.
