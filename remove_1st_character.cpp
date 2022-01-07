//cpp program to remove first character from a string.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str= "audi car is awesome.";
    str.erase(0,1); // removes first character
    cout<< str;
    return 0;
}