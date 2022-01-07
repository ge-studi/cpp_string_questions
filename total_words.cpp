#include<iostream>
#include<string.h>
using namespace std;
int main (void)
{
    char str[]="The sun shines brightly in the sky.";
    int count = 0, i; 
    
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the string are: " << count + 1;
    return 0;
}