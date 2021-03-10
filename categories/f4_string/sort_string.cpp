#include <iostream>
#include <cstring>
using namespace std;
void sort(char A[100][31], unsigned int n)
{
    char B[31];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(A[i], A[j]) > 0)
            {
                strcpy(B, A[i]);
                strcpy(A[i], A[j]);
                strcpy(A[j], B);
            }
        }
    }
}
void input_str(char s[100][31], unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "enter your name: \n";
        cin.get(s[i], 30);
    }
}
void output_str(char A[100][31], unsigned int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << A[i] << endl<<endl;
    }
}
int main()
{
    unsigned int n;
    char A[100][31];

    cout << "number of char: ";
    cin >> n;
    input_str(A, n);
    sort(A, n);
    output_str(A, n);
    return 0;
}

// for run file   g++ sort_string.cpp -o App.exe