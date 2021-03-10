#include <iostream>
using namespace std;

double Area1(double r)
{
    double pi = 3.14;
    double area = pi * r * r;
    return area;
}
double Area2(double r, double *state)
{
    double pi = 3.14;
    *state = pi * r * r;
}
int main()
{
    double state, radius;
    cout << "enter radius: \n";
    cin >> radius;
    // state = Area1(radius);
    Area2(radius, &state);
    cout << "area is: " << state;

    return 0;
}