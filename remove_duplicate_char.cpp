// cpp program to remove duplicate character from character array.
#include <bits/stdc++.h>
using namespace std;
char *removeDuplicate(char str[],int n)
{
    //used as index in the modified string.
    int index=0;
    //Traverse through all characters
    for(int i=0;i<n;i++)
    {
        //check if str[i] is present before it
        int j;
        for(j=0;j<i;j++)
        if(str[i]==str[j])
        break;
     
    //if not present then add it to the result
    if(j==i)
    str[index++] =str[i];
    }
    return str;
}
// Driver Code
int main(void)
{
    char str[]="geetu singh";
    int n=sizeof(str)/sizeof(str[0]);
    cout<<removeDuplicate(str,n);
    return 0;
}