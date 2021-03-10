#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    // if (n >= 1 && n <= 10)
    // {

    char s1[n][1000] = {'\0'};
    int i;

    for (int i = 0; i <= n; i++)
    {
        cin.getline(s1[i], 1000);
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
            {
                s1[0][j] = toupper(s1[0][j]);
            }
            else if (s1[i - 1][0] == ' ')
            {
                s1[i][0] = toupper(s1[i][0]);
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        cout << s1[i] << endl;
    }
    return 0;
    // }
}

// for run file   g++ 2.cpp -o App.exe -std=c++11