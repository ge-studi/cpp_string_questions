// C++ program to replace first occurrence of a character with another in string.
#include <iostream>
using namespace std;
int main(void)
{
    string str1,str2;
    str1="This is C language";
    str2="C++";
    cout<<"Before replacement string is:\n"<<str1<<"\n";
    str1.replace(8,1,str2); 
    //here 8 is the pos which is used whose character is to be replace.
    // here, 1 is the len which is number of characters to be replaced by another string.
    cout<<"After replacement string is:\n"<<str1<<"\n";
    return 0;
}
