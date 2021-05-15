#include <iostream>
using namespace std;
class Complex
{
    double realPart;
    double imaginaryPart;

public:
    Complex(double = 0.0, double = 0.0);
    void setComplexNumber(double, double);
    void addition(const Complex &);
    void subtraction(const Complex &);

    void printComplex(void);
};
Complex::Complex(double real, double imaginary)
{
    setComplexNumber(real, imaginary);
}

void Complex::addition(const Complex &a)
{
    realPart += a.realPart;
    imaginaryPart += a.imaginaryPart;
}

void Complex::subtraction(const Complex &s)
{
    realPart -= s.realPart;
    imaginaryPart -= s.imaginaryPart;
}

void Complex::printComplex(void)
{
    cout << '(' << realPart << ", " << imaginaryPart << ')';
}

void Complex::setComplexNumber(double rp, double ip)
{
    realPart = rp;
    imaginaryPart = ip;
}
int main()
{

    Complex b(1, 7), c(9, 2);

    b.printComplex();
    cout << " + ";
    c.printComplex();
    cout << " = ";
    b.addition(c);
    b.printComplex();

    cout << '\n';
    b.setComplexNumber(10, 1); // reset realPart and imaginaryPart
    c.setComplexNumber(11, 5);
    b.printComplex();
    cout << " - ";
    c.printComplex();
    cout << " = ";
    b.subtraction(c);
    b.printComplex();
    cout << endl;

    return 0;
}