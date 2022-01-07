// CPP program to Convert characters
// of a string to opposite case
#include <iostream>
#include <string>
using namespace std;

// Function to convert characters
// of a string to opposite case
void convertOpposite(string& str)
{
	int ln = str.length();

	// Conversion according to ASCII values
	for (int i = 0; i < ln; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			// Convert lowercase to uppercase
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			// Convert uppercase to lowercase
			str[i] = str[i] + 32;
	}
}

// Driver function
int main()
{
	string str1="GEEKsforGeeks";
	convertOpposite(str1);
	cout<<"Output string converted to opposite case is:\n";
	cout<<str1;
	string str2="Hello Every ONE";
	convertOpposite(str2);
	cout<<"\nOutput string converted to opposite case is:\n";
	cout<<str2;
	string str3="ABcdef";
	convertOpposite(str3);
	cout<<"\nOutput string converted to opposite case is:\n";
	cout<<str3;
	return 0;
}
//Time Complexity of above program is O(n).
