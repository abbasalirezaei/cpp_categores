#include <iostream>
using namespace std;

int main()
{

    int n;
    int f1, f2, f3;
    cout << "enter n: \n";
    cin >> n;
    f1 = 0;
    cout << f1 << " ";
    f2 = 1;
    f3 = f1 + f2;
    cout << f3 << " ";
    while (n > f3)
    {
        cout << f3 << " ";
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }

    return 0;
}