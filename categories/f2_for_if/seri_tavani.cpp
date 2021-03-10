//  ==>  1/x-1/x+x^2+...
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int x, s = 1;
    double sum = 0.0, sum1 = 0.0, pow = 1.0;
    cout << "enter x: \n";
    cin >> x;
    int temp = 0;
    for (int i = 1; i < 10; i++)
    {
        pow *= x;
        cout << "pow :" << pow << endl;

        sum1 += i * pow;
        cout << "sum1: " << sum1 << endl;

        sum += s * 1.0 / sum1;
        cout << "sum: " << sum << endl;
        
        s = -s;
        cout << "=========="<<endl;
    }
    cout << "sum: " << sum << endl;

    return 0;
}