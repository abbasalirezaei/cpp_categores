#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, sum;
    int SUM = 0;
    cout << "number of row and col : ";
    cin >> n;
    bool s = true;
    int arr[n][n];
    cin.ignore();
    cout << "please enter str1: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "enter row (" << i + 1 << "): ";
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        SUM += arr[i][0];
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (SUM != sum)
        {
            s = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j][i];
        }
        if (SUM != sum)
        {
            s = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[j][i];
            }
        }
        if (SUM != sum)
        {
            s = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == n - j - 1)
            {
                sum += arr[j][i];
            }
        }
        if (SUM != sum)
        {
            s = false;
        }
    }
    if (s == true)
    {
        cout << "YES";
    }
    else if (s == false)
    {
        cout << "NO";
    }

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11