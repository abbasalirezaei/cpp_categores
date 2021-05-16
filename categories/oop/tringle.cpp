#include <iostream>
#include <math.h>
using namespace std;

class tringle
{
    float a, b, c;

public:
    tringle()
    {
        a = b = c = 0;
    };
    tringle(float n, float t, float s)
    {
        a = n;
        b = t;
        c = s;
    };
    ~tringle();
    float find_area();
    void display();
};
tringle::~tringle()
{
    cout << "end of program...";
}

float tringle::find_area()
{
    float p = (a + b + c) / 2;
    return (sqrt(p * (p - a) * (p - b) * (p - c)));
}
void tringle::display()
{
    cout << "\na: " << a << " b: " << b << "  c: " << c << "  area is:  " << find_area();
}
int main()
{
    tringle b1;

    tringle b2(2, 4, 3);

    b1.display();
    cout << endl;
    b2.display();
    cout << endl;
    int t1, t2, t3;
    cout << "enter the t1 and t2 and t3: ";
    cin >> t1 >> t2 >> t3;

    tringle b3(t1, t2, t3);
    cout << endl;
    b3.display();
    cout << endl;
    return 0;
}
