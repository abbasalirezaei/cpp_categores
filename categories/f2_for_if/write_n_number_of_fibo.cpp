#include <iostream>
using namespace std;

int main()
{

    int n;
    int f1, f2, f3;
    cout << "enter n: \n";
    cin >> n;
    f1 = 0;
    f2 = 1;
    f3 = f1 + f2;

    if (n == 1)
    {
        cout << f1 << "\t";
        return 0;
    }
    if (n == 2)
    {
        cout << f1 << "\t" << f2;
        return 0;
    }
    cout << f1 << "\t" << f2 << "\t" << f3 << "\t";

    for (int i = 3; i <= n; i++)
    {

        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
        cout << f3 << " ";
    }

    return 0;
}