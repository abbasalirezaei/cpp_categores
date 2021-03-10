#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    char s1[n + 1][1000];
    int i;

    for (int i = 0; i <= n; i++)
    {
        cin.getline(s1[i], 1000);
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; s1[i][j]; j++)
        {
            if (j == 0)
            {
                s1[i][0] = toupper(s1[i][0]);
            }
            else if (s1[i][j] == ' ')
            {
                s1[i][j + 1] = toupper(s1[i][j + 1]);
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        cout << s1[i] << endl;
    }
    return 0;
}