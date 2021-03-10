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
  

  
    for (int i = 0; i < strlen(s1); i++)
    {
        if (i == 0)
        {
            s1[i] = toupper(s1[i]);
        }
        else if (s1[i-1] == ' ')
        {
            s1[i] = toupper(s1[i]);
        }
    }



    cout << "str is: " <<s1 ;

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11