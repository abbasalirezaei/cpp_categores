// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
#include <iostream>
#include <string.h>
using namespace std;
void strcpy_func(char *s1[100], char *s2[100])
{
    int i;
    for (i = 0; s2[i] = '\0'; i++)
    {
        *s1[i] = *s2[i];
    }
    *s1[i] = '\0';
}
int main()
{
    char s1[100], s2[100];
    cout << "enter your first   string : ";
    cin.getline(s1, 100);
    cout << "enter your seccend string : ";
    cin.getline(s2, 100);

    cout << s1 << endl;
    cout << s2 << endl;
    // cout << "^^^ before changes ^^^" << endl;

    // strcpy(s1, s2);

    // cout << s1 << endl;
    // cout << s2 << endl;

    cout << "^^^ whit funcktions ^^^" << endl;
    strcpy_func(s1, s2);
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11