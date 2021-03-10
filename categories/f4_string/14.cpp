#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void strcat(char s1[])
{

    int i;
    int len = strlen(s1);
    char temp;
    for (i = 0; i < len / 2; i++)
    {
        temp = s1[i];
        s1[i] = s1[len - i - 1];
        s1[len - i - 1] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    char s1[n], s2[n];
    cin.ignore();
    cout << "Enter str1: ";
    gets(s1);

    strcat(s1);
    cout << s1;

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11