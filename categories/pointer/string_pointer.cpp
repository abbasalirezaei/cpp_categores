#include <iostream>
using namespace std;

int main()
{
    char *a = "helloabbasalire";
    cout << a << endl;
    cout << *a << endl;
    cout << a[0] << endl;
    
    cout << &a << endl;
    a++;
    cout << *a++ << endl;


    return 0;
}