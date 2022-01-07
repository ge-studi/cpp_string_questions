#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    char str[]="My name is Geetanjali Singh";
    char word[]="name";
    int i, j, found;
    int strLen, wordLen;

    strLen  = strlen(str);  // Find length of string
    wordLen = strlen(word); // Find length of word

     /* Run a loop from starting index of string to length of string - word length */
    for(i=0; i<strLen - wordLen; i++)
    {
        // Match word at current position
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            // If word is not matched
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        // If word have been found then print found message
        if(found == 1)
        {
            cout<<word<<" is found";
        }
    }

    return 0;
}