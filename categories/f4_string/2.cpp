#include <iostream>
#include <stdio.h>
using namespace std;
void sort(int arr[], int n)
{
    int max, temp, i, j;
    for (i = 0; i < n; i++)
    {
        max = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[max] > arr[j])
            {
                max = j;
            }
            temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
}
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "enter your student number: \n";
        cin >> arr[i];
    }
    cout << "\n";
}
void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << endl;
    }
}
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int arr[100];
    input(arr, n);
    sort(arr, n);
    output(arr, n);

    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11