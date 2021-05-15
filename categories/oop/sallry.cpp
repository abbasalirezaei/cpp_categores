#include <iostream>

using namespace std;

class salary
{
    int month;
    int per_inc;
    long int oldpay;

public:
    long int newpay;
    long int incerment;

    void input();
    void calculate();

    void print();
};
void salary::input()
{

    cout << "enter month ,oldpay ,per_inc : ";
    cin >> month >> oldpay >> per_inc;
}
void salary::calculate()
{
    newpay = oldpay * per_inc / 100 + oldpay;
    incerment = (newpay - oldpay) * month;
}
void salary::print()
{

    cout << "New pay=  " << newpay << "   \t incerment= " << incerment;
}
int main()
{
    char answer;
    salary obj1;
    do
    {

        obj1.input();
        obj1.calculate();
        obj1.print();
        cout << "do you want to continue (y or n): ";
        cin >> answer;
    } while (answer != 'n');

    return 0;
}