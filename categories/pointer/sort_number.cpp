#include <iostream>
using namespace std;
int sort(double *p, int n)
{
    double temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {

                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}
int main()
{
    int n, i;
    double *p;
    cout << "enter number of elments: ";
    cin >> n;
    p = new double[n];
    if (p == NULL)
    {
        cout << "memory not allocated.";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "enter your number " << i + 1 << " : ";
        cin >> *(p + i);
    }
    sort(p, n);
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i);
        if (i != n - 1)
        {
            cout << " , ";
        }
    }

    return 0;
}