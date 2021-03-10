#include <iostream>

#include <string.h>
using namespace std;

int main()
{
    int n;
    // cout << "Enter n: ";
    cin >> n;

    char s1[n + 1][1000];

    for (int i = 0; i <= n; i++)
    {

        cin.getline(s1[i], 1000);
    }
    for (int i = 0; i <= n; i++)
    {
        cout << s1[i] << endl;
    }

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11