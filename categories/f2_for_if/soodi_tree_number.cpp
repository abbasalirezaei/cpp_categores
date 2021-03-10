#include <iostream>
#include <string>
using namespace std;

int main()
{

    int a, b, c;
    cout << "enter tree number: \n";
    cin >> a >> b >> c;
    int temp = 0;
    cout << "first  : " << a << " " << b << " " << c << endl;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    cout << "seccend: " << a << " " << b << " " << c << endl;
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    cout << "thered : " << a << " " << b << " " << c << endl;
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    cout << "result : " << a << " " << b << " " << c << endl;

    return 0;
}