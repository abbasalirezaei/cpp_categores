#include <iostream>
#include <math.h>
using namespace std;
struct Polynomial
{

    double A;
    double B;
    double C;
};
Polynomial Input();
void ComputePx(Polynomial *M, Polynomial *N, int x);
void ADDPolynomial(Polynomial *M, Polynomial *N);
void SUBPolynomial(Polynomial *M, Polynomial *N);
void Root(Polynomial *M, Polynomial *N);
void Display(Polynomial *M, Polynomial *N, int n);

int main()
{
    double n;
    Polynomial M;
    Polynomial N;
    M = Input();
    N = Input();
    cin >> n;
    Display(&M, &N, n);

    return 0;
}

Polynomial Input()
{
    Polynomial x;
    cin >> x.A;
    cin >> x.B;
    cin >> x.C;

    return x;
}
void ComputePx(Polynomial *M, Polynomial *N, int x)
{

    cout << "computepx1 " << (M->A) * x * x + (M->B) * x + (M->C);
    cout << endl;
    cout << "computepx2 " << (N->A) * x * x + (N->B) * x + (N->C);
}
void ADDPolynomial(Polynomial *M, Polynomial *N)
{

    cout << "add (" << (M->A) + (N->A) << "x^2)+(" << (M->B) + (N->B) << "x)+(" << (M->C) + (N->C) << ")";
}
void SUBPolynomial(Polynomial *M, Polynomial *N)
{

    cout << "sub (" << (N->A) - (M->A) << "x^2)+(" << (N->B) - (M->B) << "x)+(" << (N->C) - (M->C) << ")";
}
void Root(Polynomial *M, Polynomial *N)
{
    double delta1;
    double x1;
    double x2;
    delta1 = (M->B * M->B) - (4 * (M->A) * (M->C));
    if (delta1 > 0)
    {
        x1 = (-(M->B) - sqrt(delta1)) / 2 * ((M->A));
        x2 = (-(M->B) - sqrt(delta1)) / 2 * ((M->A));
        cout << "root1 " << x1 << " " << x2;
    }
    else if (delta1 < 0)
    {
        x1 = 0;
        x2 = 0;
        cout << "root1 ";
    }

    else
    {
        x1 = (-(M->B)) / ((M->A) * 2);
        x2 = (-(M->B)) / ((M->A) * 2);
        cout << "root1 " << x1 << " " << x2;
    }

    cout << endl;
    double delta2;
    delta2 = (N->B * N->B) - (4 * (N->A) * (N->C));
    double r1;
    double r2;

    if (delta2 > 0)
    {
        r1 = (-(N->B) + sqrt(delta2)) / 2 * ((N->A));
        r2 = (-(N->B) - sqrt(delta2)) / 2 * ((N->A));
        cout << "root2 " << r1 << " " << r2;
    }
    else if (delta2 < 0)
    {
        r1 = 0;
        r2 = 0;
        cout << "root2 ";
    }
    else
    {
        r1 = (-(N->B)) / (2 * (N->A));
        r2 = (-(N->B)) / (2 * (N->A));
        cout << "root2 " << r1 << " " << r2;
    }
}

void Display(Polynomial *M, Polynomial *N, int n)
{

    ComputePx(M, N, n);
    cout << endl;

    Root(M, N);
    cout << endl;

    ADDPolynomial(M, N);
    cout << endl;

    SUBPolynomial(M, N);
    cout << endl;
}
