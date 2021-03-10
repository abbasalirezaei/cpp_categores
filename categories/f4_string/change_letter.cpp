// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    char s1[n];
    cin.ignore();
    cout << "Enter str1: ";
    gets(s1);
    int i;
    int char_code;
    for (int i = 0; i < strlen(s1); i++)
    {
        char_code = int(s1[i]);
        if (char_code == 127)
        {
            s1[i] = char(97);
        }
        if (char_code == 90)
        {
            s1[i] = char(65);
        }
        if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 127)
        {
            s1[i] = char(char_code + 1);
        }
    }

    cout << "str is: " << s1;

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11