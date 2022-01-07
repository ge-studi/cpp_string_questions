#include <iostream>

using namespace std;

int main()
{
    char str[]="Code for coding";
    int i,vowCount=0,consCount=0;
    
    i=0;
   do{
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'
    ||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' ){
        vowCount++; //vowel counter incremented by 1
    }
    else if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )){
        consCount++;    //Consonant counter incremented by 1
    }
     i++;
} while(str[i]);
cout<<"The number of vowels:"<<vowCount<<endl;  //Display number of vowels.
cout<<"The number of consonants:"<<consCount<<endl;  //Display number of consonants.

    return 0;
}