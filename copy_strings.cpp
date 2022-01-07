//Cpp program to illustrate strcpy() function
#include<iostream>  
using namespace std;  
int main()  
{  
string str = "java programs";  
char str1[13] ;  
str.copy(str1,8,5);//copy of string from index 5 to last index  
str1[8] ='\0';  //null character
cout<<"String contains : " <<str1;  //printing of string
return 0;   
}  //end of main function 