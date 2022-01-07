/**
 * Cpp program to find the first occurrence of a word in a string
 */
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char str[]="I love coding.", word[]="love";
    int i, index, found = 0;


    /* Run loop from start to end of string */
    index = 0;
    while(str[index] != '\0')
    {

        /* If first character of word matches with the given string */
        if(str[index] == word[0])
        {
            /* Match entire word with current found index */
            i=0;
            found = 1;
            while(word[i] != '\0')
            {
                if(str[index + i] != word[i])
                {
                    found = 0;
                    break;
                }

                i++;
            }
        }
        
        /* If the word is found then get out of loop */
        if(found == 1)
        {
            break;
        }

        index++;
    }
    
    /*  Print success message if the word is found */
    if(found == 1)
    {
      
        cout<<word<<" is found at index"<<" "<<index<<endl;
    }
    else
    {
       cout<<word<<" is not found"<<endl;
    }

    return 0;
}