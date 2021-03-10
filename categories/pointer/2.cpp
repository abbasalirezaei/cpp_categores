#include <iostream>
using namespace std;

int main()
{
    int *ptr1, *ptr2, a, b;

    a = 5;
    b = 7;
    ptr1 = &a;
    ptr2 = &b;
    cout << "    a :" << a << endl;
    cout << "    b :" << b << endl;
    cout << " ptr1 :" << *ptr1 << endl;
    cout << " ptr2 :" << *ptr2 << endl;

    cout << "changes: \n";
    ptr1 = ptr2;
    cout << "    a :" << a << endl;
    cout << "    b :" << b << endl;
    cout << " ptr1 :" << *ptr1 << endl;
    cout << " ptr2 :" << *ptr2 << endl;

    return 0;
}