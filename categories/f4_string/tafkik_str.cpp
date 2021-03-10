#include <iostream>
#include <cstring>
using namespace std;

void sort(char A[], char Odd[], char Even[])
{

    int i;
    for (i = 0; i <= strlen(A); i++)
    {
        if (i % 2 == 1)
        {
            Odd[i/2] = A[i];
        }
        else
        {
            Even[i / 2] = A[i];
        }
    }
    Odd[i] = Even[i] = '\0';
}

int main()
{
    // int n;
    cout << "number string: ";
    // cin >> n;
    char A[101];
    char Odd[51];
    char Even[51];
    cin.get(A, 100);
    sort(A, Odd, Even);
    cout << "Odd  str  is : " << Odd << endl;
    cout << "Even str  is : " << Even << endl;
    return 0;
}

// for run file   g++ tafkik_str.cpp -o App.exe