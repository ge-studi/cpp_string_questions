//Cpp program to concatenate two strings using strcat() function.
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{   
    char str1[100] = "Programming is"; //input first array string
    char str2[100]= "Awesome";    //input second array string
     
      
    cout<<"Concatenated String:"<<endl;  
     
    strcat(str1, str2); //strcat() function to add two array of strings.
    cout<<str1;
    return 0; 
}//end of main function 