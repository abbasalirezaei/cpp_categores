#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void str_to_flote(char s1[], double &num)
{

    int i, len, j;
    double digit1 = 0.0, digit2 = 0.0, pow = 1.0;
    for (len = 0; s1[len] != '\0'; len++)
        ;
    for (i = 0; s1[i] != '.' && s1[i]; i++)
        ;
    for (j = i-1; j >= 0; j--)
    {
        digit1 += (s1[j] - 48) * pow;
        pow *= 10;
    }
    pow = 0.1;
    for (j = i+1; j >= 0; j--)
    {
        digit2 += (s1[j] - 48) * pow;
        pow *= 0.1;
    }
    num = digit1 + digit2;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    double num, result;
    char s1[n];
    cin.ignore();
    cout << "Enter str1: ";
    gets(s1);
    str_to_flote(s1, num);

    cout << num;

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11