// C++ program to convert lowercase characters into upper case.
#include <iostream>
#include <cstring>   //contains string related functions.
 
 
using namespace std;
 
int main(void) //main function begins here.
{
    char arr[] = "Engineering Discipline.";
 
    cout << "Original String:\n"<< arr<< endl;
    cout<<"String in UPPERCASE:\n";
    for (int x=0; x<strlen(arr); x++)   //strlen() function is used here to calculate length of a string.
        putchar(toupper(arr[x]));      //putchar is used to display data on screen/console.
     
    return 0;
}    //end of main function