#include <iostream>
using namespace std;
int main()
{
    char str[]="Geetanjali Singh";
    int i;
    int Alphabets=0,num=0,special=0,space=0;
    
    for(i=0; str[i] != '\0'; i++){
        //check for Aphabets
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) {  //check Alphabets
                Alphabets++;
    }else if(str[i]>='0' && str[i]<='9') {  //check numbers
                num++;
    }
    else if(str[i]==' '){//check space
                space++;
    }
    else{
        special++;
    }
    }
    cout<<"\nAlphabet letters: "<<Alphabets;
    cout<<"\nnumbers: "<<num;
      cout<<"\nSpace: "<<space;
    cout<<"\nSpecial characters: "<<special;
    return 0;
}