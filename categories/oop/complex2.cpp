#include <iostream>
using namespace std;
class Complex
{
    double a;
    double b;

public:
    void ADDComplex(const Complex &);
    Complex(double = 0.0, double = 0.0);
    void Input(double, double);
    void SUBComplex(const Complex &);
    void Display(void);
};
Complex::Complex(double real, double imaginary)
{
    Input(real, imaginary);
}
void Complex::ADDComplex(const Complex &ii)
{
    a += ii.a;
    b += ii.b;
    cout <<"add "<< a << "+" << b << 'i';
}

void Complex::SUBComplex(const Complex &s)
{
    a -= s.a;
    b -= s.b;
    cout <<"sub "<< a << "+" << b << 'i';
}
void Complex::Input(double rp, double ip)
{
    a = rp;
    b = ip;
}
int main()
{
    int a, t, f, d;
    cin >> a >> t >> f >> d;
    Complex obj1(a, t), obj2(f, d);

    obj1.ADDComplex(obj2);
    //for reset data
    obj1.Input(a, t);
    obj2.Input(f, d);
    cout << endl;

    obj2.SUBComplex(obj1);

    return 0;
}