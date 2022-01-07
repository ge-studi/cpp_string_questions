// C++ program for efficient approach 
//to check palindrome string.
#include <iostream>
using namespace std;
 
// Iterative function to check if the given string is a palindrome or not
bool isPalindrome(string str)
{// iterate over range 0 to length/2 and 
// check if the character at index low is equal to length-1.
//if not equal print false else increment lower index and decrement higher one.
    int low = 0;
    int high = str.length() - 1;
 
    while (low < high)
    {
        // if a mismatch happens
        if (str[low] != str[high]) {
            return false;
        }
 
        low++;
        high--;
    }
 
    return true;
}
 
int main()
{
    string str = "naman";
 
    if (isPalindrome(str)) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    string str1 = "abcdcba";
 
    if (isPalindrome(str1)) {
        cout << "\nPalindrome";
    }
    else {
        cout << "\nNot Palindrome";
    }
 
    return 0;
}
// Time complexity is O(n).
// Auxiliary Space is O(1).
