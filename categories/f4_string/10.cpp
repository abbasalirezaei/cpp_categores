#include <iostream>
#include <stdio.h>
using namespace std;
void input(int arr1[4][5], int arr2[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "enter row " << i + 1 << " :";
        for (int j = 0; j < 4; j++)
        {

            cin >> arr1[i][j];
        }
    }
}
void finmaxrow(int arr1[4][5], int arr2[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        arr2[i][4] = arr1[i][0];
        for (int j = 0; j < 4; j++)
        {

            if (arr1[i][j] > arr2[i][4])
            {
                arr2[i][4] = arr1[i][j];
            }
        }
    }
}

void output(int arr1[4][5], int arr2[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        for (int j = 0; j < 4; j++)
        {

            cout << arr1[i][j] << "     ";
        }
        cout << "\t";
        cout << arr2[i][4];
    }
}
int main()
{
    int arr1[4][5], arr2[4][5];
    input(arr1, arr2);
    finmaxrow(arr1, arr2);
    output(arr1, arr2);
    return 0;
}

// for run file   g++ 2.cpp -o App.exe -std=c++11