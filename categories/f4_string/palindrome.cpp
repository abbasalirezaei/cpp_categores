#include <iostream>
#include <string.h>
using namespace std;
string cheeck(char text[], string is_palindrome)
{
    char temp;
    int l = 0;
    is_palindrome = "NO";
    for (int i = 0; i < strlen(text); i++)
    {
        l++;
    }
    string str1, str2;
    for (int i = 0; i < strlen(text) / 2; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            str1 += tolower(text[i]);
        if ((text[l - 1 - i] >= 'a' && text[l - 1 - i] <= 'z') || (text[l - 1 - i] >= 'A' && text[l - 1 - i] <= 'Z'))
            str2 += tolower(text[l - 1 - i]);
    }
    if (str1 == str2)
    {
        return "yes";
    }
    else
    {
        return "no";
    }
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    string is_palindrome;
    char text[n];
    cin.ignore();
    cout << "Enter str1: ";
    gets(text);
    // cheeck(text, is_palindrome);
    cout << "is_palindrome : " << cheeck(text, is_palindrome);

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11