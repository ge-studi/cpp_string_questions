// Cpp program to remove a particular character from string
#include<bits/stdc++.h>
using namespace std;
void removeChar(char* s,char c) //function to remove occurrences of all characters from a string.
{
    int j,n=strlen(s); //calculate length of a string
    for(int i=j=0;i<n;i++)
    if(s[i]!=c)
       s[j++]=s[i];
       s[j]='\0'; //null character
}
 int main(void)
 {
    
     char s[]="geetanjali";
      char c='e';
      removeChar(s,c);
      cout<<s<<endl;
      return 0;

 }