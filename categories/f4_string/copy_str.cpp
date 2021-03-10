#include <iostream>
using namespace std;

void copy_str(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
}
int main()
{

    char str1[20], str2[20];
    gets(str1);
    copy_str(str1, str2);
    cout << str2;
    return 0;
}

// for run file   g++ copy_str.cpp -o App.exe -std=c++11