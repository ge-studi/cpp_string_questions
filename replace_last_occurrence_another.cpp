/* Cpp Program to Replace Last Occurrence of a Character in a String */
#include <iostream>
#include <stdio.h>
#include <string.h>
 
using namespace std; 

int main()
{
  	char str[]="Coding is fun.", ch, Newch;
  	int i, index;
  	index = -1;
 
   ch='.',Newch='!';
  	
  	for(i = 0; str[i] != '\0'; i++)
  	{
  		if(str[i] == ch)  
		{
  			index = i;
 		}
	}
	
	if(index != -1)
  	{
  		str[index] = Newch;
	}

	cout<<"\n The Final String after Replacing Last occurrence is:\n"<< str<<endl;;
	
  	return 0;
}