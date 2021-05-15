// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    string s1, s2;
    cout << "enter your first str: ";
    getline(cin, s1);
    cout << "enter your first str: ";
    getline(cin, s2);

    bool cheeck = true;
    if (s1.length() != s2.length())
    {
        cheeck = false;
    }
    else
    {

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
            {
                cheeck = false;
            }
        }
    }
    if (cheeck)
    {
        cout << "two str is equal ...";
    }
    else
    {
        cout << "two str is not equal ...";
    }

    return 0;
}

// for run file   g++ compare_tow_string.cpp -o App.exe