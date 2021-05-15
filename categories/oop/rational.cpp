
#include <iostream>
#include <math.h>
using namespace std;

class Rational
{
private:
    int numerator, denominator;
    void reduction(void);

public:
    Rational(int = 0, int = 1);
    Rational addition(const Rational &);
    Rational subtraction(const Rational &);
    Rational multiplication(const Rational &);
    Rational division(const Rational &);

    void printRational(void);
    void printRationalAsDouble(void);
};
Rational::Rational(int n, int d)
{
    numerator = n;
    denominator = d;
}
Rational Rational::addition(const Rational &a)
{
    Rational t;
    t.numerator = a.numerator * denominator;
    t.numerator += a.denominator * numerator;
    t.denominator = a.denominator * denominator;
    t.reduction();

    return t;
}
Rational Rational::subtraction(const Rational &a)
{
    Rational t;
    t.numerator = a.denominator * numerator;
    t.numerator -= denominator * a.numerator;
    t.denominator = a.denominator * denominator;
    t.reduction();

    return t;
}
Rational Rational::multiplication(const Rational &a)
{
    Rational t;
    t.numerator = a.numerator * numerator;
    t.denominator = a.denominator * denominator;
    t.reduction();

    return t;
}
Rational Rational::division(const Rational &a)
{
    Rational t;
    t.numerator = a.denominator * numerator;
    t.denominator = denominator * a.numerator;
    t.reduction();

    return t;
}
void Rational::printRational()
{
    if (denominator == 0)
    {
        cout << "\nDIViade by zero error!!!" << '\n';
    }
    else if (numerator == 0)
    {

        cout << 0;
    }
    else
    {
        cout << numerator << "/" << denominator;
    }
};

void Rational::printRationalAsDouble(void)
{
    cout << static_cast<double>(numerator) / denominator;
}

void Rational::reduction(void)
{
    int largest;
    largest = numerator > denominator ? numerator : denominator;
    int gcd = 0; // greatest common divisor

    for (int loop = 2; loop <= largest; ++loop)
        if (numerator % loop == 0 && denominator % loop == 0)
            gcd = loop;

    if (gcd != 0)
    {
        numerator /= gcd;
        denominator /= gcd;
    }
}
int main()
{
    int f1, f2, t1, t2;
    cout << "enter sorat and makhraj kasre1: ";
    cin >> f1 >> f2;
    Rational c(f1, f2);
    cout << "enter sorat and makhraj kasre2: ";
    cin >> t1 >> t2;
    Rational d(t1, t2), x;

    c.printRational();
    cout << " + ";
    d.printRational();
    x = c.division(d);
    cout << " = ";
    x.printRational();
    // cout << '\n';
    // x.printRational();
    // cout << " = ";
    // x.printRationalAsDouble();
    // cout << "\n\n";

    // c.printRational();
    // cout << " - ";
    // d.printRational();
    // x = c.subtraction(d);
    // cout << " = ";
    // x.printRational();
    // cout << '\n';
    // x.printRational();
    // cout << " = ";
    // x.printRationalAsDouble();
    // cout << "\n\n";
    // c.printRational();
    // cout << " x ";
    // d.printRational();
    // x = c.multiplication(d);
    // cout << " = ";
    // x.printRational();
    // cout << '\n';
    // x.printRational();
    // cout << " = ";
    // x.printRationalAsDouble();
    // cout << "\n\n";

    // c.printRational();
    // cout << " / ";
    // d.printRational();
    // x = c.division(d);
    // cout << " = ";
    // x.printRational();
    // cout << '\n';
    // x.printRational();
    // cout << " = ";
    // x.printRationalAsDouble();
    // cout << endl;

    return 0;
}