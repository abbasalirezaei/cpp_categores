#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int determinant(int C[n][n], int n)
{

    int det = 0;
    int submatrix[n][n];
    if (n == 2)
        return ((C[0][0] * C[1][1]) - (C[1][0] * C[0][1]));
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
                    submatrix[subi][subj] = C[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * C[0][x] * determinant(submatrix, n - 1));
        }
        cout << "\n";
        cout << "\ndeterminant" << determinant(C, n);
    }
    return det;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    double A[n][n], B[n][n];

    // **************read A
    for (int i = 0; i < n; i++)
    {
        cout << "enter A row " << i + 1 << " : ";
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    // **************show A
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    // **************read B
    for (int i = 0; i < n; i++)
    {
        cout << "enter B row " << i + 1 << " : ";
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }
    // **************show B
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "multyply of tow matirx a*b is: " << endl;
    int C[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << ' ';
        }
        cout << "\n";
    }
}
// for run file   g++ 2.cpp -o App.exe -std=c++11