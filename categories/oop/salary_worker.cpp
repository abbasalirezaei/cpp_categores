#include <iostream>

using namespace std;

class salary
{
    string name;
    int hours;
    int count_of_child;
    int salry_by_hours;

public:
    long int newpay;
    long int incerment;

    void input();
    void calculate();

    void print();
};
void salary::input()
{

    cout << "enter name ,hours ,count_of_child,salry_by_hours : ";
    cin >> name >> hours >> count_of_child >> salry_by_hours;
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
    int n;
    cout << "enter number of worker: ";
    cin >> n;
    salary obj1[n];
    for (int i = 0; i < n; i++)
    {
        obj1[i].input();
    }

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