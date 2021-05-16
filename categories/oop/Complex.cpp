#include <iostream>
using namespace std;

class Complex
{
private:
    float a, b;

public:
    void Input();
    void Display(Complex *p1, Complex *p2);
    void ADDComplex(Complex *p1, Complex *p2);
    void SUBComplex(Complex *p1, Complex *p2);
};

void Complex::Input()
{
    cin >> a;
    cin >> b;
}

void Complex::ADDComplex(Complex *p1, Complex *p2)
{
    cout << "add " << (p1->a) + (p2->a) << "+" << (p1->b) + (p2->b) << "i";
}

void Complex::SUBComplex(Complex *p1, Complex *p2)
{
    cout << "add " << (p1->a) - (p2->a) << "+" << (p1->b) - (p2->b) << "i";
}

void Complex::Display(Complex *p1, Complex *p2)
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
    p1.Input();

    p2.Input();

    // p1.ADDComplex(&p1, &p2);

    // p1.Display();
    // p2.Display();
    // p2 = Input();
    Display(&p1, &p2);
    return 0;
}
