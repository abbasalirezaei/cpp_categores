#include <iostream>
#include <stdio.h>
using namespace std;
int search_str(char s1[], char s2[])
{
    int i, j, k;

    for (i = 0; s2[i]; i++)
    {
        k = i;
        j = 0;
        while (s1[j] == s2[k] && s1[j] && s2[k])
        {
            k++;
            j++;
        }
        if (!s1[j])
        {
            return (i + 1);
        }
        if (!s1[j] && !s2[k])
        {
            return (i + 1);
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "enter  n: \n";
    cin >> n;
    int location;
    char s2[n], s1[n];
    cin.ignore();
    cout << "enter s2: \n";
    gets(s2);
    cout << "enter s1: \n";
    gets(s1);

    location = search_str(s1, s2);
    if (location != 0)
    {
        cout << "fund: and location is: " << location;
    }
    else
    {
        cout << "not fund";
    }

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11