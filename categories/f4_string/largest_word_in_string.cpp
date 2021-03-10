#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    gets(s);
    string largest_word, temp;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ' && (int(s[i]) >= 65 && int(s[i]) <= 90) ||
            (int(s[i]) >= 99 && int(s[i]) <= 122) || (int(s[i]) >= 48 && int(s[i]) <= 57))
        {
            largest_word.push_back(s[i]);
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ' && (int(s[i]) >= 65 && int(s[i]) <= 90) ||
            (int(s[i]) >= 99 && int(s[i]) <= 122) || (int(s[i]) >= 48 && int(s[i]) <= 57))
        {
            temp.push_back(s[i]);
            if (i + 1 == strlen(s) && temp.length() > largest_word.length())
            {
                largest_word = temp;
            }
        }
        else
        {
            if (temp.length() > largest_word.length())
            {
                largest_word = temp;
            }
            temp.clear();
        }
    }

    return 0;
}

// for run file   g++ sort_string.cpp -o App.exe