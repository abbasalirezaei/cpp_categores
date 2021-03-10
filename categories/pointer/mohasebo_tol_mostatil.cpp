#include <iostream>
using namespace std;

double Area2(double toool, double arze, double *state, double *area)
{
    double pi = 3.14;
    *state = toool * arze;
    *area = (toool * arze) * 2;
}
int main()
{
    double state, toool, arze, area;
    cout << "enter toool and arze : \n";
    cin >> toool >> arze;
    // state = Area1(radius);
    Area2(toool, arze, &state, &area);
    cout << "state  is: " << state << endl;
    cout << "area   is: " << area;

    return 0;
}