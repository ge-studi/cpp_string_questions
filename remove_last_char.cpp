/**
 * Cpp program to replace first occurrence of a character with another in a string
 */
#include<iostream>
#include <stdio.h>
using namespace std;

/* Function declaration */
void replaceFirst(char * str, char oldChar, char newChar);


int main()
{
    char str[]="I love coding.", oldChar, newChar;

    oldChar = 'I';
    newChar = '!';


    cout<<"\nString before replacing: \n"<< str<<endl;

    replaceFirst(str, oldChar, newChar);

    cout<<"String after replacing first character with another in a string is\n" << str<<endl;

    return 0;
}


/**
 * Replace first occurrence of a character with
 * another in given string.
 */
void replaceFirst(char * str, char oldChar, char newChar)
{
    int i=0;

    /* Run till end of string */
    while(str[i] != '\0')
    {
        /* If an occurrence of character is found */
        if(str[i] == oldChar)
        {
            str[i] = newChar;
            break;
        }

        i++;
    }
}