//C++ program to find minimum occurring character in a string.
#include<iostream>
#include <cstring>
using namespace std;
main()
{
    string str;
    str="I love to learn programming.";
    int in,len=0;
    char sub_str[100][100]={0};
    //Initialize frequency of all characters to 0.
    for(in=0;str[in]!='\0';in++)
    {
        len++;
    }
    int i,min=999;
    int arr[256]={0};
    //find minimum frequency.
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
            continue;
            arr[str[i]]++;
    }
    char ch=' ';
    for (i =0; i <len; i++) {
    if(arr[str[i]]!=0)
    if (arr[str[i]]<=min) {
    min = arr[str[i]];
    ch = str[i];
   }
  }
    cout<<"The Minimum occurring character in a string is "<<ch;
}

