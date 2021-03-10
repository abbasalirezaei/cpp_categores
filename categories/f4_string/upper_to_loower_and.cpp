// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
#include <iostream>
#include <string.h>
using namespace std;
char insrt_str(char text[])
{
    int str_code;
    for (int i = 0; i < strlen(text); i++)
    {
        str_code = int(text[i]);
        if (str_code >= 65 && str_code <= 90)
        {
            str_code + 32;
        }
        else if (str_code >= 97 && str_code <= 122)
        {
            str_code - 32;
        }
    }

  
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    char s1[n];
    cout << "Enter str1: ";
    cin.ignore();
    gets(s1);
    cout << s1;
    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11