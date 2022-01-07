#include <iostream>
#include <cstring>
 
 
using namespace std;
 
int main()
{
    char arr[] = "ENGINEERING DISCIPLINE."; //inputting string of arrays
 
    cout << "Original String:\n"<< arr<< endl;
    cout<<"String in lowercase:\n";
    for (int x=0; x<strlen(arr); x++) //loop to iterate from 0th index to last index.
        putchar(tolower(arr[x]));          //to display data on console
     
    return 0;
}