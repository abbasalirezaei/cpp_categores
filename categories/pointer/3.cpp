#include <iostream>
using namespace std;

int main()
{
    int *ptr1, x = 10;

    ptr1 = &x;

    cout << "*ptr1: " << *ptr1 << " ,ptr1=" << ptr1 << endl;
    (*ptr1)++;
    cout << "*ptr1: " << *ptr1 << " ,ptr1=" << ptr1 << endl;
    (ptr1)++;
    cout << "*ptr1: " << *ptr1 << " ,ptr1=" << ptr1 << endl;
    return 0;
}