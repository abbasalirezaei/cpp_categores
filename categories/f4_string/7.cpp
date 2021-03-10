#include <iostream>
#include <stdio.h>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int convert(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    return 0;
}
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter your choosing number " << i + 1 << " : ";
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cout << "enter  n: \n";
    cin >> n;
    int arr1[n];
    input(arr1, n);
    convert(arr1, n);
    print(arr1, n);

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11