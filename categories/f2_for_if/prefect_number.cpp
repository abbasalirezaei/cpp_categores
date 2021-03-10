#include <iostream>
using namespace std;

int main()
{

    int n, sum, x = 1;
    char ask_for_continu;
    while (x)
    {
        cout << "enter yout number: ";
        cin >> n;
        sum = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            cout << "this number is prefect: \n";
        }
        else
        {
            cout << "this number is not prefect: \n";
        }

        cout << "++++++++++++++++++++++++++\n";
        cout << "do you want to continue (y or n) ? \n";
        cin >> ask_for_continu;
        if (ask_for_continu == 'n')
        {
            x = 0;
        }
        else
        {
            continue;
        }
    }

    return 0;
}