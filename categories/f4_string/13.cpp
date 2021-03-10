#include <iostream>
#include <stdio.h>
using namespace std;
void strcat(char s1[], char s2[], int n)
{
    int l = 0;
    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        l++;
    }
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[l++] = s2[i];
    }
    s1[l] = '\0';
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
    cout << "Enter str2: ";
    gets(s2);
    strcat(s1, s2, n);
    cout << s1;

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11