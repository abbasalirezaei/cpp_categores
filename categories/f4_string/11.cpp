#include <iostream>
#include <stdio.h>
using namespace std;
void strcopy(char str1[], char str2[], int n)
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}
int main()
{
    int n;
    cout << "enter n for number of char in str: ";
    cin >> n;
    char str1[n]={'\0'}, str2[n]={'\0'};
    cin.ignore();
    cout << "please enter str1: \n";
    gets(str1);
    cout << "str 2 before change  is : " << str2<<endl;
    strcopy(str1, str2, n);
    cout << "str 2 after  change  is : " << str2;
    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11