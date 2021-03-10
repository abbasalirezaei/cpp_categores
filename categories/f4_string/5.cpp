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
    int arr1[n];
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        cout << "enter your choosing number " << i + 1 << " : ";
        cin >> arr1[i];
    }
    if (mid != 0)
    {
        for (int i = 0; i < n; i++)
        {
            arr1[i] / mid;
        }
    }


    cout << "midle number is: " << arr1[mid];
    // }
    // else
    // {
    //     cout << "midle number is: " << arr1[(n - 1) / 2];
    // }

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11