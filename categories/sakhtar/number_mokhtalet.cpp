#include <iostream>
#include <math.h>
using namespace std;
struct Complex
{

    double a;
    double b;
};
Complex Input()
{
    Complex x;
    cin >> (x).a;
    cin >> (x).b;
    return x;
}
void ADDComplex(Complex *x, Complex *y)
{
    cout << "add " << (x->a) + (y->a) << "+" << (x->b) + (y->b) << "i";
}
void SUBComplex(Complex *x, Complex *y)
{
    cout << "sub " << (y->a) - (x->a) << "+" << (y->b) - (x->b) << "i";
}

void Display(Complex *p1, Complex *p2)
{
    ADDComplex(p1, p2);
    cout << endl;
    SUBComplex(p1, p2);
    cout << endl;
}

int main()
{

    Complex p1;
    Complex p2;
    p1 = Input();
    p2 = Input();
    Display(&p1, &p2);

    return 0;
}