//cpp prog to count occurrence of char in a string.
#include <iostream>
#include <string>
 
int main()
{
    std::string s = "C++,Java";
    char ch = '+';
 
    int count = 0;
    for (int i = 0; (i = s.find(ch, i)) != std::string::npos; i++) {
        count++;
    }
 
    std::cout << "Character " << ch << " occurs " << count << " times";
 
    return 0;
}