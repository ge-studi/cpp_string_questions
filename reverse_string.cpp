//Cpp prog to illustrate reverse of a string 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main() //main function
{ 
    string str = " reverse example"; 
    reverse(str.begin(), str.end()); //reverse()function to reverse the given string
    cout<<"\n"<<str; 
    return 0;
} //end of main function