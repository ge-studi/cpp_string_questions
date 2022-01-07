#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[100], s2[100];

    s1="Cpp-strings";

    strcpy(s2, s1);

    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;

    return 0;
}