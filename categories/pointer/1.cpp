#include <iostream>
using namespace std;

int main()
{
    int *p, a, b;

    a = 5;
    p = &a;

    
    b = *p;

    cout << " a :" << a << endl;
    cout << " b :" << b << endl;
    cout << " p :" << p << endl;

    return 0;
}