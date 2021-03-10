#include <iostream>
using namespace std;

void add_tow_str(char a[], char b[])
{

    int l = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        l++;
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        a[l++] = b[i];
    }

    a[l] = '\0';
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a')
        {
            a[i] = 'A';
        }
    }
}
int main()
{

    char str1[100], str2[100];

    cout << "enter str 1" << endl;
    gets(str1);
    cout << "enter str 2" << endl;
    gets(str2);

    add_tow_str(str1, str2);
    cout << str1;
    return 0;
}

// for run file   g++ add_tow_str.cpp -o App.exe -std=c++11