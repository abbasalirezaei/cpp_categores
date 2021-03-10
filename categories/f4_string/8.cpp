#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, number;
    int teble[] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};

    double sum = 0.0;
    int code;

    cout << "enter your car number and number of takhalof: ";
    cin >> number >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "enter code: ";
        cin >> code;

        if (code <= 9 && code >= 0)
        {
            sum += (double)teble[code];
        }
        else
        {
            i--;
            cout << "enter the correct code...";
            continue;
        }
    }

    cout << "car number is > " << number << " < and sum of takhalof is : " << sum;

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11