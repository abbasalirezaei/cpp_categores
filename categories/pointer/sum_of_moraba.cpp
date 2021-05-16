#include <iostream>
using namespace std;
int area(int *p1, int *p2, int *masahat)
{
    *masahat = *p1 * *p2;
}
int main()
{
    // int *x1, *x2, *sum;
    // x1 = new (nothrow) int;
    // x2 = new (nothrow) int;

    // sum = new (nothrow) int;
    // cin >> *x1 >> *x2;
    // *sum = *x1 * *x1 + *x2 * *x2;
    // cout << *sum;

    int *toll, *arze, *masahat;
    toll = new (nothrow) int;
    arze = new (nothrow) int;
    masahat = new (nothrow) int;
    cin >> *toll >> *arze;
    area(toll, arze, masahat);
    cout << *masahat;
    return 0;
}
//  for run file g++ sum_of_moraba.cpp -o App.exe