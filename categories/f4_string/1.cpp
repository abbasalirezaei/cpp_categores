#include <iostream>
#include <stdio.h>
using namespace std;
int prime(int a[], int tedad, int num)
{
    //list,2,4
    for (int i = 0; i < tedad; i++)
    {
        if (num % a[i] == 0)
        {
            return 0;
        }
    }
    a[tedad] = num;
    return 1;
}

int main()
{
    int list_prime_number[300], tedad = 0, n;

    cout << "enter your choosing number: ";
    cin >> n;
    //n=34
    for (int i = 2; i <= n; i++)
    {//2
        //i=3
        if (prime(list_prime_number, tedad, i))//list[2,3,],2,4
        {
            tedad++;
        }
    }

    cout << "primary is: ";
    for (int i = 0; i < tedad; i++)
    {
        cout << " " << list_prime_number[i];
    }

    // cout
}

// for run file   g++ remove_num.cpp -o App.exe -std=c++11