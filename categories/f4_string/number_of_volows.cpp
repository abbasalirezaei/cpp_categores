// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    char text[n];
    cin.ignore();
    cout << "Enter str1: ";
    gets(text);
    int counter = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'o' || text[i] == 'u' ||
            text[i] == 'i')
        {
            counter++;
        }
        if (text[i] == 'A' || text[i] == 'E' || text[i] == 'O' || text[i] == 'U' ||
            text[i] == 'I')
        {
            counter++;
        }
    }
    cout << "Original string: " << text << " number of vowels -> " << counter << endl;

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11