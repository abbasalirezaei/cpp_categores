#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int determinant(int matrix[10][10], int n)
{
    int det = 0;
    int submatrix[10][10];
    if (n == 2)
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else
    {
        for (int x = 0; x < n; x++)
        {
            int subi = 0;
            for (int i = 1; i < n; i++)
            {
                int subj = 0;
                for (int j = 0; j < n; j++)
                {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinant(submatrix, n - 1));
        }
    }
    return det;
}
int main()
{
    int n;
    // cout << "Enter n: ";
    cin >> n;
    int A[10][10], B[10][10];

    // **************read A
    for (int i = 0; i < n; i++)
    {
        // cout << "enter A row " << i + 1 << " : ";
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    // **************read B
    for (int i = 0; i < n; i++)
    {
        // cout << "enter B row " << i + 1 << " : ";
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << endl;
    // cout << "multyply of tow matirx a*b is: " << endl;
    int C[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << C[i][j] << ' ';
    //     }
    //     cout << "\n";
    // }
    // cout << endl;
    // cout << determinant(C, n);
    if (determinant(C, n) % 2 != 0)
    {
        cout << "Danial";
    }
    else
    {
        cout << "Farzad";
    }
}

// for run file   g++ 2.cpp -o App.exe -std=c++11